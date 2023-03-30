#define _GNU_SOURCE
#include "s21_decimal.h"

#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// АРИФМЕТИЧЕСКИЕ ОПЕРАТОРЫ
s21_decimal s21_add(s21_decimal dec1, s21_decimal dec2) {  // сложение
    s21_decimal res = {{0, 0, 0, 0}, s21_typeCheck(dec1, dec2, 1)};
    if (res.value_type == s21_NORMAL_VALUE) {
        s21_normalize(&dec1, &dec2);
        if ((!s21_is_greater_or_equal(dec1, res) && !s21_is_greater_or_equal(dec2, res)) ||
            (!s21_is_less_or_equal(dec1, res) && !s21_is_less_or_equal(dec2, res))) {
            unsigned int sign = (dec1.bits[3] >> 31) | (dec2.bits[3] >> 31);
            int temp = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 32; j++) {
                    unsigned int mask = (1u << j);
                    int num1 = (mask & dec1.bits[i]) > 0;
                    int num2 = (mask & dec2.bits[i]) > 0;
                    if (num1 ^ num2 ^ temp) {
                        res.bits[i] |= mask;
                    }
                    temp = (num1 + num2 + temp) >= 2 ? 1 : 0;
                }
            }
            res.bits[3] |= sign << 31;
            res.bits[3] |= dec1.bits[3] & MASK_EXP_SCALE;
            if (temp > 0) {
                res.bits[0] = 0;
                res.bits[1] = 0;
                res.bits[2] = 0;
                res.bits[3] = 0;
                if (sign) {
                    res.value_type = s21_NEGATIVE_INFINITY;
                } else {
                    res.value_type = s21_INFINITY;
                }
            }
        } else {
            if (!s21_is_greater(dec1, res)) {
                dec2 = s21_negate(dec2);
                res = s21_sub(dec1, dec2);
            } else {
                dec1 = s21_negate(dec1);
                res = s21_sub(dec2, dec1);
            }
        }
    }
    return res;
}

s21_decimal s21_sub(s21_decimal dec1, s21_decimal dec2) {  // вычитание
    s21_decimal res = {{0, 0, 0, 0}, s21_typeCheck(dec1, dec2, 2)};
    if (res.value_type == s21_NORMAL_VALUE) {
        s21_normalize(&dec1, &dec2);
        if ((!s21_is_greater(dec1, res) && !s21_is_greater(dec2, res)) ||
            (!s21_is_less(dec1, res) && !s21_is_less(dec2, res))) {
            unsigned int sign = dec1.bits[3] >> 31;
            if (!s21_is_greater(dec1, res) && !s21_is_less(dec1, dec2)) {
                s21_swap(&dec1, &dec2);
                sign = 1;
            } else if (!s21_is_less(dec1, res) && !s21_is_greater(dec1, dec2)) {
                s21_swap(&dec1, &dec2);
                sign = 0;
            }
            int temp = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 32; j++) {
                    unsigned int mask = (1u << j);
                    int num1 = (mask & dec1.bits[i]) > 0;
                    int num2 = (mask & dec2.bits[i]) > 0;
                    if (temp == 0) {
                        if (num1 == 0 && num2 == 1) {
                            temp = 1;
                            res.bits[i] |= (1 << j);
                        } else {
                            res.bits[i] |= ((num1 ^ num2) << j);
                        }
                    } else {
                        if (num1 == 1 && num2 == 0) {
                            temp = 0;
                        } else {
                            res.bits[i] |= ((num1 + 1 - num2) << j);
                        }
                    }
                }
            }
            res.bits[3] |= sign << 31;
            res.bits[3] |= dec1.bits[3] & MASK_EXP_SCALE;
        } else {
            dec2 = s21_negate(dec2);
            res = s21_add(dec1, dec2);
        }
    }
    return res;
}

s21_decimal s21_mul(s21_decimal dec1, s21_decimal dec2) {  // умножение
    s21_decimal result, null;
    int sign = 0;
    s21_decimal_set_default(&result);
    s21_decimal_set_default(&null);

    if (getSign(&dec1)) sign += 1;
    if (getSign(&dec2)) sign += 1;

    if (checkMul(dec1, dec2, &result)) {
        s21_normalize(&dec1, &dec2);
        while (s21_is_equal(dec2, null)) {
            if (dec2.bits[0] & 1) {
                result = s21_add(result, dec1);
            }
            dec1 = s21_move_left(dec1, 1);
            dec2 = s21_move_right(dec2, 1);
        }

        if (sign == 1)
            setSign(&result);
        else
            clearSign(&result);

        if (result.value_type == s21_INFINITY) {
            s21_decimal_set_default(&result);
            result.value_type = s21_INFINITY;
        } else {
            result.value_type = s21_NORMAL_VALUE;
        }
    }
    return result;
}

s21_decimal s21_div(s21_decimal dec1, s21_decimal dec2) {  // деление
    s21_decimal quotient, mod;
    quotient.value_type = s21_NORMAL_VALUE;
    mod.value_type = s21_NORMAL_VALUE;
    int sign = 0;

    if (getSign(&dec1)) sign += 1;
    if (getSign(&dec2)) sign += 1;

    check_div(&dec1, &dec2, &quotient, &mod);
    div_mod(&mod, &dec2, &quotient);

    if (sign == 1)
        setSign(&quotient);
    else
        clearSign(&quotient);

    return quotient;
}

s21_decimal s21_mod(s21_decimal dec1, s21_decimal dec2) {  // остаток от деления
    s21_decimal quotient, mod;
    s21_decimal_set_default(&quotient);
    s21_decimal_set_default(&mod);
    int sign = 0;
    if (getSign(&dec1)) sign = 1;
    check_div(&dec1, &dec2, &quotient, &mod);
    if (sign)
        setSign(&mod);
    else
        clearSign(&mod);
    return mod;
}

// ОПЕРАТОРЫ СРАВНЕНИЯ
int s21_is_less(s21_decimal dec1, s21_decimal dec2) {  // меньше (<)
    // 0 - TRUE, 1 - FALSE
    int result = 0;
    if (dec1.value_type == s21_NORMAL_VALUE && dec2.value_type == s21_NORMAL_VALUE) {
        s21_normalize(&dec1, &dec2);
        if (!getSign(&dec1) && getSign(&dec2)) {
            result = 1;
        } else if (getSign(&dec1) == getSign(&dec2)) {
            int i = 0;
            for (i = 2; i >= 0 && (dec1.bits[i] == dec2.bits[i]); i--) {
            }
            if (i == -1) {
                result = 1;
            } else if (getSign(&dec1) && (dec1.bits[i] <= dec2.bits[i])) {
                result = 1;
            } else if (!getSign(&dec1) && (dec1.bits[i] >= dec2.bits[i])) {
                result = 1;
            }
        }
    } else if (dec1.value_type == s21_INFINITY || dec2.value_type == s21_INFINITY) {
        result = 1;
    } else if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
        result = 1;
    }
    return result;
}

int s21_is_less_or_equal(s21_decimal dec1, s21_decimal dec2) {  // меньше или равно (<=)
    // 0 - TRUE, 1 - FALSE
    int result = 0;
    if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
        result = 1;
    } else {
        result = !s21_is_greater(dec1, dec2);
    }
    return result;
}

int s21_is_greater(s21_decimal dec1, s21_decimal dec2) {  // больше (>)
    // 0 - TRUE, 1 - FALSE
    int result = 0;
    if (dec1.value_type == s21_NORMAL_VALUE &&
        dec2.value_type == s21_NORMAL_VALUE) {
        s21_normalize(&dec1, &dec2);
        if (getSign(&dec1) && !getSign(&dec2)) {
            result = 1;
        } else if (getSign(&dec1) == getSign(&dec2)) {
            int i = 0;
            for (i = 2; i >= 0 && (dec1.bits[i] == dec2.bits[i]); i--) {
            }
            if (i == -1) {
                result = 1;
            } else if (!getSign(&dec1) && (dec1.bits[i] <= dec2.bits[i])) {
                result = 1;
            } else if (getSign(&dec1) && (dec1.bits[i] >= dec2.bits[i])) {
                result = 1;
            }
        }
    } else if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
        result = 1;
    } else if (dec1.value_type == s21_NEGATIVE_INFINITY || dec2.value_type == s21_INFINITY) {
        result = 1;
    }
    return result;
}

int s21_is_greater_or_equal(s21_decimal dec1, s21_decimal dec2) {  // больше или равно (>=)
    // 0 - TRUE, 1 - FALSE
    int result = 0;
    if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
        result = 1;
    } else {
        result = !s21_is_less(dec1, dec2);
    }
    return result;
}

int s21_is_equal(s21_decimal dec1, s21_decimal dec2) {  // равно (==)
    // 0 - TRUE, 1 - FALSE
    int result = 0;
    s21_normalize(&dec1, &dec2);
    if (dec1.value_type == s21_NORMAL_VALUE && dec2.value_type == s21_NORMAL_VALUE) {
        for (int i = 0; i <= 2; i++) {
            if (dec1.bits[i] != dec2.bits[i]) {
                result = 1;
            }
        }
        if ((dec1.bits[3] >> 31) != (dec2.bits[3] >> 31))
            result = 1;
    } else if (dec1.value_type == s21_NEGATIVE_INFINITY && dec2.value_type == s21_NEGATIVE_INFINITY) {
        result = 0;
    } else if (dec1.value_type == s21_INFINITY && dec2.value_type == s21_INFINITY) {
        result = 0;
    }
    return result;
}

int s21_is_not_equal(s21_decimal dec1, s21_decimal dec2) {  // не равно (!=)
    // 0 - TRUE, 1 - FALSE
    return !s21_is_equal(dec1, dec2);
}

// ПРЕОБРАЗОВАТЕЛИ
int s21_from_float_to_decimal(float src, s21_decimal *dst) {  // из float в decimal
    int flag = 0, minus = 0;
    s21_decimal_set_default(dst);
    double srcTemp = (double)src;
    checkFloat(srcTemp, dst);
    int binexp = getBinExp(src);
    if (src < 0) minus = 1;
    if (isnan(src)) {
        dst->value_type = s21_NAN;
        flag = 1;
    } else if (binexp > 95) {
        dst->value_type = minus ? s21_NEGATIVE_INFINITY : s21_INFINITY;
        flag = 1;
    } else if (isinf(src)) {
        dst->value_type = minus ? s21_NEGATIVE_INFINITY : s21_INFINITY;
        flag = 1;
    } else if (binexp > -95) {
        int scale = 0;
        double result = 1.0;
        int mask = MASK_FIRST_BIT_MANTISSA;
        unsigned int fbits = float_bits(src);
        if (minus) src *= -1;
        for (; !(int)src; src *= 10, scale++) {  // 1 <= mantissa < 10
        }
        for (; src > 10; src /= 10, scale--) {
        }
        for (int i = 1; mask; mask >>= 1, i++) {
            if (fbits & mask) result += pow(2, -i);  // считаем мантиссу флота
        }
        result *= pow(2, binexp) * pow(10, 8 + scale);
        if (scale > 0) {
            for (; result < 10000000; result *= 10) {
            }
        }
        long int tmp = 0L;
        tmp = round(result);
        int mod = 0;
        for (; tmp >= 10000000;) {  // семь нулей
            mod = tmp % 10;
            tmp = round(tmp);
            tmp /= 10;
        }
        for (; scale + 7 > 29; mod = tmp % 10, tmp /= 10, scale--) {
        }
        if (mod > 4) tmp++;
        for (; tmp % 10 == 0; mod = tmp % 10, tmp /= 10, scale--) {
        }
        s21_from_int_to_decimal((int)tmp, dst);  // записали
        for (; scale + 7 <= 0; s21_shift_left(dst, 1), scale++) {
        }
        setScale(dst, scale + 6);
        if (minus) setSign(dst);
    }
    return flag;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {  // из decimal в float
    int flag = 0;
    if (src.value_type == s21_INFINITY ||
        src.value_type == s21_NEGATIVE_INFINITY || src.value_type == s21_NAN) {
        flag = 1;
    } else {
        double res = 0.0;
        for (int i = 0; i < 96; i++) {
            if (getBit(src, i)) {
                res += pow(2, i);
            }
        }
        int scale = getScale(&src);
        if (scale != 0) {
            for (int i = scale; i > 0; i--) {
                res /= 10.0;
            }
        }
        if (getSign(&src))
            *dst = (float)res * (-1);
        else
            *dst = (float)res;
    }
    return flag;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {  // из int в decimal
    int flag = 0;
    s21_decimal_set_default(dst);
    if (src < 0) {
        setSign(dst);
        dst->bits[0] = -src;
    } else {
        clearSign(dst);
        dst->bits[0] = src;
    }
    dst->bits[1] = 0;
    dst->bits[2] = 0;
    dst->value_type = s21_NORMAL_VALUE;
    return flag;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {  // из decimal в int
    int flag = 0;
    if (src.value_type == s21_NORMAL_VALUE && dst) {
        src = s21_truncate(src);
        if (FindFirstNonZeroBit(&src) > 31) {
            flag = 1;
        } else {
            if (!getSign(&src) && src.bits[0] <= INT_MAX)
                *dst = src.bits[0];
            else if (getSign(&src) && src.bits[0] <= (unsigned int)INT_MAX + 1)
                *dst = -src.bits[0];
            else
                flag = 1;
        }
    } else {
        flag = 1;
    }
    return flag;
}

// ДРУГИЕ ФУНКЦИИ
s21_decimal s21_floor(s21_decimal dec) {
    unsigned int exp = (dec.bits[3] & 0x00ff0000) >> 16;
    if (exp) {
        s21_decimal nul = {{0, 0, 0, 0}, s21_NORMAL_VALUE};
        s21_decimal one = {{1, 0, 0, 0}, s21_NORMAL_VALUE};
        s21_decimal tmp = dec;
        if (!s21_is_less(dec, nul)) {
            s21_shift_right(&dec, exp);
            if (!s21_is_not_equal(tmp, dec)) {
                dec = s21_sub(dec, one);
            }
        } else {
            s21_shift_right(&dec, exp);
        }
    }
    return dec;
}

s21_decimal s21_round(s21_decimal dec) {
    unsigned int exp = getScale(&dec);
    if (exp) {
        s21_decimal tmp = dec;
        s21_decimal nul = DECIMAL_NULL;
        s21_decimal one = DECIMAL_ONE;
        s21_decimal half = DECIMAL_HALF;

        if (!s21_is_less(dec, nul)) {
            s21_shift_right(&dec, exp);
            tmp = s21_sub(tmp, dec);
            half = s21_negate(half);
            if (!s21_is_less_or_equal(tmp, half)) {
                dec = s21_sub(dec, one);
            }
        } else {
            s21_shift_right(&dec, exp);
            tmp = s21_sub(tmp, dec);
            if (!s21_is_greater_or_equal(tmp, half)) dec = s21_add(dec, one);
        }
    }
    return dec;
}

s21_decimal s21_truncate(s21_decimal dec) {
    unsigned int exp = getScale(&dec);
    s21_shift_right(&dec, exp);
    return dec;
}

s21_decimal s21_negate(s21_decimal dec) {
    if (dec.value_type == s21_NORMAL_VALUE)
        dec.bits[3] ^= MASK_FIRST_BIT;
    else if (dec.value_type == s21_INFINITY)
        dec.value_type = s21_NEGATIVE_INFINITY;
    else if (dec.value_type == s21_NEGATIVE_INFINITY)
        dec.value_type = s21_INFINITY;
    return dec;
}

// ДЛЯ АРИФМЕТИКИ
value_type_t s21_typeCheck(s21_decimal dec1, s21_decimal dec2, int type) {
    value_type_t res = s21_NORMAL_VALUE;

    if (type == 1) {
        if (dec1.value_type == s21_INFINITY && dec2.value_type == s21_NEGATIVE_INFINITY) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_NEGATIVE_INFINITY && dec2.value_type == s21_INFINITY) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_INFINITY || dec2.value_type == s21_INFINITY) {
            res = s21_INFINITY;
        } else if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_NEGATIVE_INFINITY || dec2.value_type == s21_NEGATIVE_INFINITY) {
            res = s21_NEGATIVE_INFINITY;
        }
    }

    if (type == 2) {
        if (dec1.value_type == s21_INFINITY && dec2.value_type == s21_INFINITY) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_NEGATIVE_INFINITY && dec2.value_type == s21_NEGATIVE_INFINITY) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_NEGATIVE_INFINITY && dec2.value_type == s21_INFINITY) {
            res = s21_NEGATIVE_INFINITY;
        } else if (dec1.value_type == s21_INFINITY && dec2.value_type == s21_NEGATIVE_INFINITY) {
            res = s21_INFINITY;
        } else if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN) {
            res = s21_NAN;
        } else if (dec1.value_type == s21_INFINITY && dec2.value_type == s21_NORMAL_VALUE) {
            res = s21_INFINITY;
        } else if (dec1.value_type == s21_NORMAL_VALUE && dec2.value_type == s21_INFINITY) {
            res = s21_NEGATIVE_INFINITY;
        } else if (dec1.value_type == s21_NEGATIVE_INFINITY && dec2.value_type == s21_NORMAL_VALUE) {
            res = s21_NEGATIVE_INFINITY;
        } else if (dec1.value_type == s21_NORMAL_VALUE && dec2.value_type == s21_NEGATIVE_INFINITY) {
            res = s21_INFINITY;
        }
    }

    return res;
}

int checkMul(s21_decimal dec1, s21_decimal dec2, s21_decimal *res) {
    s21_decimal decimalZero;
    s21_decimal_set_default(&decimalZero);
    res->value_type = s21_NORMAL_VALUE;
    decimalZero.value_type = s21_NORMAL_VALUE;
    int checkZero = 0, checkDoubleInfinity = 0, checkInfOne = 0, checkInfTwo = 0;
    if (dec1.value_type == s21_INFINITY ||
        dec1.value_type == s21_NEGATIVE_INFINITY)
        checkInfOne = 1;
    if (dec2.value_type == s21_INFINITY ||
        dec2.value_type == s21_NEGATIVE_INFINITY)
        checkInfTwo = 1;
    checkDoubleInfinity = checkInfTwo + checkInfOne;
    if (s21_is_equal(dec1, decimalZero) == 0 && checkDoubleInfinity == 1 &&
        checkInfOne == 0) {
        res->value_type = s21_NAN;
    } else if (s21_is_equal(dec2, decimalZero) == 0 && checkDoubleInfinity == 1 && checkInfTwo == 0) {
        res->value_type = s21_NAN;
    } else if (dec1.value_type == s21_INFINITY || dec1.value_type == s21_NORMAL_VALUE) {
        if (dec2.value_type == s21_INFINITY)
            res->value_type = s21_INFINITY;
        else if (dec2.value_type == s21_NEGATIVE_INFINITY)
            res->value_type = s21_NEGATIVE_INFINITY;
        else if (dec2.value_type == s21_NORMAL_VALUE)
            res->value_type = s21_INFINITY;
    } else if (dec2.value_type == s21_INFINITY || dec2.value_type == s21_NORMAL_VALUE) {
        if (dec1.value_type == s21_NEGATIVE_INFINITY)
            res->value_type = s21_NEGATIVE_INFINITY;
    }
    if (dec1.value_type == s21_NAN || dec2.value_type == s21_NAN)
        res->value_type = s21_NAN;
    if (dec1.value_type == s21_NORMAL_VALUE && dec2.value_type == s21_NORMAL_VALUE) {
        res->value_type = s21_NORMAL_VALUE;
        checkZero = 1;
    }
    return checkZero;
}


int shiftBit(s21_decimal *dst, int position) {
  int positionThirtyOne = 0, positionSixtyThree = 0, positionInfinity = 0;
  for (int i = 0; i < position; i++) {
    if (getBit(*dst, 31) == 1) positionThirtyOne = 1;
    if (getBit(*dst, 63) == 1) positionSixtyThree = 1;
    if (getBit(*dst, 95) == 1) positionInfinity = 1;
    for (int j = 0; j < 3; j++) dst->bits[j] = dst->bits[j] << 1;
    if (positionThirtyOne == 1) {
      setBit(dst, 32);
      positionThirtyOne = 0;
    }
    if (positionSixtyThree == 1) {
      setBit(dst, 64);
      positionSixtyThree = 0;
    }
  }
  return positionInfinity;
}

//  деление остатка от деления
void div_mod(s21_decimal *mod, s21_decimal *divisor, s21_decimal *quotient) {
    s21_decimal decimalTemp, decimalTemp2, decMil;

    s21_decimal_set_default(&decimalTemp);
    s21_decimal_set_default(&decimalTemp2);
    s21_decimal_set_default(&decMil);

    s21_from_float_to_decimal(1000000, &decMil);
    *mod = s21_mul(*mod, decMil);
    div_int(mod, divisor, &decimalTemp, &decimalTemp2);
    shiftBit(&decimalTemp2, 1);
    if (s21_is_less_or_equal(*divisor, decimalTemp2) == 0) {
        setBit(&decimalTemp, 0);
    }
    int scale = getScale(&decimalTemp) + 6;
    setScale(&decimalTemp, scale);
    *quotient = s21_add(decimalTemp, *quotient);
}


// целочисленное деление decimal
void div_int(s21_decimal *dividend, s21_decimal *divisor, s21_decimal *quotient, s21_decimal *mod) {
    s21_decimal decimalTemp, decimalZero, sub;
    clearSign(divisor);
    clearSign(dividend);

    s21_decimal_set_default(&decimalTemp);  //  изменяемое делимое
    s21_decimal_set_default(&sub);          //  изменяемое делимое
    s21_decimal_set_default(quotient);      //  результат
    s21_decimal_set_default(mod);
    s21_decimal_set_default(&decimalZero);
    s21_normalize(dividend, divisor);

    int a = s21_is_equal(*divisor, decimalZero);
    int b = s21_is_less(*dividend, *divisor);

    if (a == 1 && b != 0) {
        for (int i = 95; i >= 0; i--) {
            shiftBit(&decimalTemp, 1);
            if (getBit(*dividend, i)) setBit(&decimalTemp, 0);
            int sizeSub1 = getScale(divisor);
            setScale(&decimalTemp, sizeSub1);
            sub = s21_sub(decimalTemp, *divisor);
            int flag = 0;
            if (s21_is_less_or_equal(*divisor, decimalTemp) == 0) {
                flag = 1;
                rewriteDecimal(&sub, &decimalTemp);
                int sizeSub = getScale(&sub);
                setScale(&decimalTemp, sizeSub);
                shiftBit(quotient, 1);
                setBit(quotient, 0);
            } else {
                if (flag == 1) shiftBit(quotient, 1);
            }
            if (i == 0) rewriteDecimal(&decimalTemp, mod);
        }
    } else if (a == 1 && b == 0) {
        s21_decimal_set_default(quotient);
        rewriteDecimal(dividend, mod);
    } else {
        s21_decimal_set_default(quotient);
    }
}

void check_div(s21_decimal *dividend, s21_decimal *divisor, s21_decimal *quotient, s21_decimal *mod) {
    s21_decimal decimalZero;
    s21_decimal_set_default(&decimalZero);

    clearSign(divisor);
    clearSign(dividend);

    s21_decimal_set_default(quotient);
    s21_decimal_set_default(mod);

    int equal = s21_is_equal(*divisor, decimalZero);

    if (equal) {
        if (divisor->value_type == s21_NEGATIVE_INFINITY) {  //  делитель = минус бесконенчость
            if (dividend->value_type == s21_NEGATIVE_INFINITY ||
                dividend->value_type == s21_INFINITY) {
                quotient->value_type = s21_NAN;
                mod->value_type = s21_NAN;
            } else if (dividend->value_type == s21_NORMAL_VALUE) {
                *quotient = s21_negate(*quotient);
                rewriteDecimal(dividend, mod);
                mod->value_type = s21_NORMAL_VALUE;
            }
        } else if (divisor->value_type == s21_INFINITY) {  //  делитель = бесконечность
            if (dividend->value_type == s21_NEGATIVE_INFINITY ||
                dividend->value_type == s21_INFINITY) {
                quotient->value_type = s21_NAN;
                mod->value_type = s21_NAN;
            } else if (dividend->value_type == s21_NORMAL_VALUE) {
                rewriteDecimal(dividend, mod);
                mod->value_type = s21_NORMAL_VALUE;
                s21_decimal_set_default(quotient);
            }
        } else {
            s21_normalize(dividend, divisor);
            div_int(dividend, divisor, quotient, mod);
        }
    } else {
        //  делитель = 0
        if (dividend->value_type == s21_NEGATIVE_INFINITY)
            quotient->value_type = s21_NEGATIVE_INFINITY;
        else if (dividend->value_type == s21_INFINITY)
            quotient->value_type = s21_INFINITY;
        else
            quotient->value_type = s21_NAN;
        mod->value_type = s21_NAN;
    }
}

//

// наши второстепенные функции
int s21_shift_left(s21_decimal *dec, unsigned int value) {
    int flag = 0;
    unsigned int exp = getScale(dec);
    if ((value + exp) < 29) {
        s21_decimal res = *dec;
        for (unsigned int s = 0; s < value && !flag; s++, exp++) {
            unsigned int carry = 0;  // флаг переноса
            for (int i = 0; i < 3; i++) {
                unsigned long long tmp = (unsigned long long)res.bits[i] * 10 + carry;
                carry = tmp / MASK_CARRY_UNIT;        // MCU(10) = 4294967296
                res.bits[i] = tmp % MASK_CARRY_UNIT;  // переполнение последнего байта
                                                      // предыдушего разряда
            }                                         // переходит в следующий.
            if (carry > 0) flag = 1;                  // проверка на переполнение деки
        }
        if (!flag) {
            *dec = res;
            dec->bits[3] = (dec->bits[3] & MASK_FIRST_BIT) | (exp << 16);
        }
    } else {
        flag = 1;
    }
    return flag;
}

int s21_shift_right(s21_decimal *dec, unsigned int value) {
    int flag = 0;
    unsigned int exp = getScale(dec);
    if (value <= exp) {
        s21_decimal res = *dec;
        for (unsigned int s = 0; s < value; s++, exp--) {
            unsigned int carry = 0;  // флаг переноса
            for (int i = 2; i >= 0; i--) {
                unsigned long long tmp = (unsigned long long)res.bits[i] + carry * MASK_CARRY_UNIT;
                carry = tmp % 10;
                res.bits[i] = tmp / 10;
            }
        }
        *dec = res;
        dec->bits[3] = (dec->bits[3] & MASK_FIRST_BIT) | (exp << 16);
    } else {
        flag = 1;
    }
    return flag;
}

int s21_normalize(s21_decimal *dec1, s21_decimal *dec2) {
    int flag = 0;  // 0 - SUCCESS, 1 - PRESSION LOST
    if (!dec1->bits[0] && !dec1->bits[1] && !dec1->bits[2]) {  //  -0.0 -> 0.0
        clearSign(dec1);
    }
    if (!dec2->bits[0] && !dec2->bits[1] && !dec2->bits[2]) {  //  -0.0 -> 0.0
        clearSign(dec2);
    }

    unsigned int exp1 = getScale(dec1);
    unsigned int exp2 = getScale(dec2);
    if (exp1 < exp2) {
        for (; exp1 != exp2 && !s21_shift_left(dec1, 1); exp1 = getScale(dec1)) {
        }
        if (exp1 != exp2) {
            for (; exp1 != exp2; exp2 = getScale(dec2)) {
                s21_shift_right(dec2, 1);
                flag = 1;
            }
        }
    } else {
        for (; exp1 != exp2 && !s21_shift_left(dec2, 1); exp2 = getScale(dec2)) {
        }
        if (exp1 != exp2) {
            for (; exp1 != exp2; exp1 = getScale(dec1)) {
                s21_shift_right(dec1, 1);
                flag = 1;
            }
        }
    }
    return flag;
}

// узнать индекс первого ненулевого бита
int FindFirstNonZeroBit(s21_decimal *d) {
    int index = 0, flag = 0;
    for (unsigned int i = 0; i <= 2; i++) {
        for (unsigned int mask = MASK_FIRST_BIT; mask; mask >>= 1, index++) {
            if (d->bits[i] & mask) flag = index;
        }
    }
    return flag;
}

//  проверить бит в позицию числа
int getBitNumber(unsigned int number, int position) {
    return ((number & (1u << position)) != 0);
}

//  проверка числа float на nan/+-inf
void checkFloat(float src, s21_decimal *decimal) {
    int checkSign = getBitNumber((unsigned int)src, 31);
    if (isinf(src) == 1 && checkSign == 0) {
        decimal->value_type = s21_INFINITY;
    } else if (isinf(src) == 1 && checkSign == 1) {
        decimal->value_type = s21_NEGATIVE_INFINITY;
    } else if (isnan(src) == 1) {
        decimal->value_type = s21_NAN;
    } else {
        decimal->value_type = s21_NORMAL_VALUE;
    }
}

unsigned int float_bits(float src) {
    unsigned int fbits = *((unsigned int *)&src);
    return fbits;
}

int getBinExp(float src) {
    int i = 7, exp = 0;
    // unsigned int fbits = *((unsigned int *)&src);
    unsigned fbits = float_bits(src);
    // &src - адрес флота, (unsigned int *) - интерпретирует адрес как указатель
    // на unsigned int,
    // *(...) - обращаемся по этому указателю

    fbits <<= 1u;  // пропускаем бит со знаком
    for (unsigned int mask = MASK_FIRST_BIT; i >= 0; mask >>= 1, i--) {
        if (!!(fbits & mask)) exp += pow(2, i);
    }
    return exp - 127;
}

int getBit(s21_decimal d, int i) {
    unsigned int mask = 1 << i % 32;
    int count = i / 32;  // 0,1,2
    return !!(d.bits[count] & mask);
}

int setScale(s21_decimal *d, int scale) {
    return d->bits[3] = scale << 16;
}

void setOtherBit(s21_decimal *dst, int i, int value) {
    unsigned int setMask = 1u << (i % 32);
    if (value == 1) {
        (*dst).bits[i / 32] |= setMask;
    } else {
        (*dst).bits[i / 32] &= ~setMask;
    }
}

s21_decimal s21_move_right(s21_decimal src, int shift) {
    s21_decimal res;
    s21_decimal_set_default(&res);
    for (int i = 0; i < 95; setOtherBit(&res, i, getBit(src, shift + i)), i++) {
    }
    return res;
}

// Сдвиг влево на количество shift битов */
s21_decimal s21_move_left(s21_decimal src, int shift) {
    int inf_flag = 0;
    s21_decimal dec = DECIMAL_NULL;
    dec.bits[3] = src.bits[3];

    for (int i = 95; i > 95 - shift; i--) {
        if (getBit(src, i)) {
            inf_flag = 1;
        }
    }
    if (!inf_flag) {
        for (int pos = 95; pos >= shift; pos--) {
            int bit = getBit(src, pos - shift);
            setOtherBit(&dec, pos, bit);
        }
    }
    return dec;
}

int getScale(s21_decimal *d) { return ((d->bits[3] & MASK_EXP_SCALE) >> 16); }

void setSign(s21_decimal *d) {
    // d->bits[3] = MASK_FIRST_BIT;
    unsigned int sign = 1u;
    d->bits[3] |= sign << 31;
}

int getSign(s21_decimal *d) { return d->bits[3] >> 31; }

void setBit(s21_decimal *d, int i) {  // включить бит
    d->bits[i / 32] |= (1 << i);
}

void clearSign(s21_decimal *d) { d->bits[3] = 0x00000000; }

void s21_swap(s21_decimal *dec1, s21_decimal *dec2) {
    s21_decimal tmp = *dec1;
    *dec1 = *dec2;
    *dec2 = tmp;
}

//  перезапись decimal
void rewriteDecimal(s21_decimal *dst, s21_decimal *dectmp) {
    s21_decimal_set_default(dectmp);
    for (int i = 127; i >= 0; i--)
        if (getBit(*dst, i) == 1) setBit(dectmp, i);
}

// обнуление деки
void s21_decimal_set_default(s21_decimal *dec) {
    dec->bits[0] = 0;
    dec->bits[1] = 0;
    dec->bits[2] = 0;
    dec->bits[3] = 0;
    dec->value_type = s21_NORMAL_VALUE;
}
