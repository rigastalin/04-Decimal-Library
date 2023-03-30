#ifndef SRC_S21_DECIMAL_H_
#define SRC_S21_DECIMAL_H_

typedef enum {
    s21_NORMAL_VALUE = 0,
    s21_INFINITY = 1,
    s21_NEGATIVE_INFINITY = 2,
    s21_NAN = 3,
} value_type_t;

typedef struct {
    unsigned int bits[4];
    value_type_t value_type;
} s21_decimal;

#define MASK_FIRST_BIT 0x80000000         // маска, указывающая на первый бит из 32
#define MASK_FIRST_BIT_MANTISSA 0x400000  // маска, указывающая на первый бит мантиссы
#define MASK_EXP_SCALE 0x00ff0000         // маска, указывающая на N в scale
#define MASK_CARRY_UNIT 0x100000000       // неявная единица между мантиссой и старшим разрядом
#define MAX_LEN 29u                       // значимые биты (u - unsigned)

#define DECIMAL_NULL {{0, 0, 0, 0}, s21_NORMAL_VALUE};          // 0
#define DECIMAL_ONE {{1, 0, 0, 0}, s21_NORMAL_VALUE};           // 1
#define DECIMAL_HALF {{5, 0, 0, 0x0010000}, s21_NORMAL_VALUE};  // 0.5

// Арифметические операторы
s21_decimal s21_add(s21_decimal dec1, s21_decimal dec2);  // сложение
s21_decimal s21_sub(s21_decimal dec1, s21_decimal dec2);  // вычитание
s21_decimal s21_mul(s21_decimal dec1, s21_decimal dec2);  // умножение
s21_decimal s21_div(s21_decimal dec1, s21_decimal dec2);  // деление
s21_decimal s21_mod(s21_decimal dec1, s21_decimal dec2);  // остаток от деления (mod)

// Операторы сравнения
int s21_is_less(s21_decimal dec1, s21_decimal dec2);              // меньше (<)
int s21_is_less_or_equal(s21_decimal dec1, s21_decimal dec2);     // меньше или равно (<=)
int s21_is_greater(s21_decimal dec1, s21_decimal dec2);           // больше (>)
int s21_is_greater_or_equal(s21_decimal dec1, s21_decimal dec2);  // больше или равно (>=)
int s21_is_equal(s21_decimal dec1, s21_decimal dec2);             // равно (==)
int s21_is_not_equal(s21_decimal dec1, s21_decimal dec2);         // не равно (!=)

// Преобразователи
int s21_from_int_to_decimal(int src, s21_decimal *dst);      // из int
int s21_from_float_to_decimal(float src, s21_decimal *dst);  // из float
int s21_from_decimal_to_int(s21_decimal src, int *dst);      // в int
int s21_from_decimal_to_float(s21_decimal src, float *dst);  // в float

// Другие рекомендованные функции
s21_decimal s21_floor(s21_decimal dec);
// округляет указанное Decimal число до ближайшего целого числа в сторону отрицательной бесконечности
s21_decimal s21_round(s21_decimal dec);
// округляет Decimal до ближайшего целого числа
s21_decimal s21_truncate(s21_decimal dec);
// возвращает целые цифры указанного Decimal числа; любые дробные цифры отбрасываются
s21_decimal s21_negate(s21_decimal dec);
// возвращает результат умножения указанного Decimal на -1

// Другие наши функции
int s21_shift_left(s21_decimal *dec, unsigned int value);
int s21_shift_right(s21_decimal *dec, unsigned int value);
int s21_normalize(s21_decimal *dec1, s21_decimal *dec2);
int shiftBit(s21_decimal *dst, int position);
s21_decimal s21_move_right(s21_decimal src, int shift);
s21_decimal s21_move_left(s21_decimal src, int shift);

int getBit(s21_decimal d, int i);                            // возвращает 1, если бит установлен (дека)
int getBitNumber(unsigned int number, int position);         // возвращает 1, если бит установлен (число)
void setBit(s21_decimal *d, int i);                          // устанавливает бит по указанному индексу
void setOtherBit(s21_decimal *dst, int i, int value);        // обнуляет или устанавливает бит
int getSign(s21_decimal *d);                                 // возвращает 1, если число имеет знак минус
void setSign(s21_decimal *d);                                // устанавливает числу знак минус
void clearSign(s21_decimal *d);                              // очищает знак числа
int getScale(s21_decimal *d);                                // возвращает коэффицент масштабирования
int setScale(s21_decimal *d, int scale);                     // устанавливает коэффицент масштабирования
int getBinExp(float src);                                    // считает эскпоненту в числе с плавающей точкой
int FindFirstNonZeroBit(s21_decimal *d);                     // находит самый старший разряд
void s21_swap(s21_decimal *dec1, s21_decimal *dec2);         // меняет деки местами
void s21_decimal_set_default(s21_decimal *dec);              // обнуление деки
unsigned int float_bits(float src);                          // перевод float в битовый формат
void rewriteDecimal(s21_decimal *dst, s21_decimal *dectmp);  //  перезапись decimal

// Распечать Decimal
void decimal_print(s21_decimal d);
void bits_print(unsigned value);
char *dec_to_string(s21_decimal d);

// Проверки
value_type_t s21_typeCheck(s21_decimal dec1, s21_decimal dec2, int type);  // проверить тип деки
void checkFloat(float src, s21_decimal *decimal);                          // проверка числа
int checkMul(s21_decimal dec1, s21_decimal dec2, s21_decimal *res);        // проверки для умножения
void check_div(s21_decimal *dividend, s21_decimal *divisor,                // проверки для деления
               s21_decimal *quotient, s21_decimal *mod);

// Деление
void div_mod(s21_decimal *mod, s21_decimal *divisor,  //  деление остатка от деления
             s21_decimal *quotient);
void div_int(s21_decimal *dividend, s21_decimal *divisor,  // целочислeнное деление decimal
             s21_decimal *quotient, s21_decimal *mod);

#endif  // SRC_S21_DECIMAL_H_
