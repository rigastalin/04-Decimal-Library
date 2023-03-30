#include "s21_decimal.h"

#include <check.h>
#include <stdio.h>

START_TEST(s21_addTest1) {
    // 5
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest2) {
    // 31
    s21_decimal src1, src2, origin;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    // ck_assert_int_eq(origin.bits[3], result.bits[3]);
    // // ck_assert_int_eq(origin.bits[2], result.bits[2]);
    // ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest3) {
    // 57
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    // ck_assert_int_eq(origin.bits[3], result.bits[3]);
    // // ck_assert_int_eq(origin.bits[2], result.bits[2]);
    // ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest4) {
    // 83
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    // ck_assert_int_eq(origin.bits[3], result.bits[3]);
    // // ck_assert_int_eq(origin.bits[2], result.bits[2]);
    // ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest5) {
    // 109
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    // ck_assert_int_eq(origin.bits[3], result.bits[3]);
    // // ck_assert_int_eq(origin.bits[2], result.bits[2]);
    // ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest6) {
    // 135
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest7) {
    // 161
    s21_decimal src1, src2, origin;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000010011101100000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest8) {
    // 187
    s21_decimal src1, src2, origin;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000101110100011001110100011111;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest9) {
    // 213
    s21_decimal src1, src2, origin;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000011111010011101111100100011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest10) {
    // 239
    s21_decimal src1, src2, origin;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000001011001000011001011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest11) {
    // 265
    s21_decimal src1, src2, origin;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111101101100110001110000110010;
    origin.bits[1] = 0b00000000000000000000000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest12) {
    // 291
    s21_decimal src1, src2, origin;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001100110100101000000111001000;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest13) {
    // 317
    s21_decimal src1, src2, origin;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10001001111010000000000000000000;
    origin.bits[1] = 0b10001010110001110010001100000100;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest14) {
    // 343
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000001;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest15) {
    // 369
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00111111011101000111010111001010;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000001010;
    origin.bits[3] = 0b00000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest16) {
    // 395
    s21_decimal src1, src2, origin;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01110001001010101101101011101101;
    origin.bits[1] = 0b00101110001111001110000111111000;
    origin.bits[2] = 0b10110000001111101110111101101101;
    origin.bits[3] = 0b10000000000011100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest17) {
    // 421
    s21_decimal src1, src2, origin;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10110110001010011011010111011010;
    origin.bits[1] = 0b11111001111010100000110001111111;
    origin.bits[2] = 0b10110000001111101111000010010100;
    origin.bits[3] = 0b10000000000011100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest18) {
    // 447
    s21_decimal src1, src2, origin;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001110111001000011100101110110;
    origin.bits[1] = 0b01001011001101011010000111011001;
    origin.bits[2] = 0b00011001101110010111010010111111;
    origin.bits[3] = 0b00000000000011110000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest19) {
    // 473
    s21_decimal src1, src2, origin;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010010000011011110010110111111;
    origin.bits[1] = 0b10100111010011100111001000100001;
    origin.bits[2] = 0b00011100010100111001110111101101;
    origin.bits[3] = 0b00000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest20) {
    // 499
    s21_decimal src1, src2, origin;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10010010000001100111100010100101;
    origin.bits[1] = 0b10001011011010100100100011011111;
    origin.bits[2] = 0b00011100010100011001001100010001;
    origin.bits[3] = 0b00000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest21) {
    // 525
    s21_decimal src1, src2, origin;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10010010000001100111100010100101;
    origin.bits[1] = 0b10001011011010100100100011011111;
    origin.bits[2] = 0b00011100010100011001001100010001;
    origin.bits[3] = 0b10000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest22) {
    // 551
    s21_decimal src1, src2, origin;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010010000011011110010110111111;
    origin.bits[1] = 0b10100111010011100111001000100001;
    origin.bits[2] = 0b00011100010100111001110111101101;
    origin.bits[3] = 0b10000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest23) {
    // 577
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest24) {
    // 603
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest25) {
    // 629
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest26) {
    // 655
    s21_decimal src1, src2, origin;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111110;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b11111111111111111111111111111111;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest27) {
    // 681
    s21_decimal src1, src2, origin;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01100010111100011011000010101001;
    origin.bits[1] = 0b01101101111100110111111101100111;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest28) {
    // 707
    s21_decimal src1, src2, origin;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00110111111111010001010100111010;
    origin.bits[1] = 0b00000000000111110100000111110010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest29) {
    // 733
    s21_decimal src1, src2, origin;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10011010010111001101001011101010;
    origin.bits[1] = 0b10111110010100100100110100010011;
    origin.bits[2] = 0b00000000000010101001000111100111;
    origin.bits[3] = 0b00000000000110000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest30) {
    // 759
    s21_decimal src1, src2, origin;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010101111011100000000010001100;
    origin.bits[1] = 0b01111000000001011001100110101101;
    origin.bits[2] = 0b00011111101010011000001000100010;
    origin.bits[3] = 0b10000000000011000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest31) {
    // 785
    s21_decimal src1, src2, origin;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01110000110111010100000010001101;
    origin.bits[1] = 0b01011010100111011110001100001010;
    origin.bits[2] = 0b00100111111010111100110001011010;
    origin.bits[3] = 0b00000000000111000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest32) {
    // 811
    s21_decimal src1, src2, origin;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10101111000101110100011110110111;
    origin.bits[1] = 0b01100110100011011000001100010111;
    origin.bits[2] = 0b00011100011001100111011011000001;
    origin.bits[3] = 0b00000000000010000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_addTest33) {
    // 837
    s21_decimal src1, src2, origin;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_add(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111110;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b11111111111111111111111111111111;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest1) {
    // 863
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest2) {
    // 889
    s21_decimal src1, src2, origin;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest3) {
    // 915
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest4) {
    // 941
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest5) {
    // 967
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest6) {
    // 993
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest7) {
    // 1019
    s21_decimal src1, src2, origin;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000010000100000010000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest8) {
    // 1045
    s21_decimal src1, src2, origin;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000101110100011001110100010111;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest9) {
    // 1071
    s21_decimal src1, src2, origin;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000011111010011101111100011001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest10) {
    // 1097
    s21_decimal src1, src2, origin;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000001011001000011001101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest11) {
    // 1123
    s21_decimal src1, src2, origin;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111101101100110001110000110000;
    origin.bits[1] = 0b00000000000000000000000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest12) {
    // 1149
    s21_decimal src1, src2, origin;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001100110100101000000111000010;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest13) {
    // 1175
    s21_decimal src1, src2, origin;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10001001111001111111111111111110;
    origin.bits[1] = 0b10001010110001110010001100000100;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest14) {
    // 1201
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111110;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest15) {
    // 1227
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11000000100010111000101000100010;
    origin.bits[1] = 0b11111111111111111111111111111101;
    origin.bits[2] = 0b00000000000000000000000000001001;
    origin.bits[3] = 0b00000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest16) {
    // 1253
    s21_decimal src1, src2, origin;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10010100100110011101101011101101;
    origin.bits[1] = 0b11000101100100110110100101100010;
    origin.bits[2] = 0b10110000001111101111000110111100;
    origin.bits[3] = 0b10000000000011100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest17) {
    // 1279
    s21_decimal src1, src2, origin;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001111100110110000000000000000;
    origin.bits[1] = 0b11111001111001100011111011011011;
    origin.bits[2] = 0b10110000001111101111000010010100;
    origin.bits[3] = 0b10000000000011100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest18) {
    // 1305
    s21_decimal src1, src2, origin;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001110111001000011100101110110;
    origin.bits[1] = 0b01001011001101011010000111011001;
    origin.bits[2] = 0b00011001101110010111010010111111;
    origin.bits[3] = 0b00000000000011110000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest19) {
    // 1331
    s21_decimal src1, src2, origin;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10010010000001100111100010100101;
    origin.bits[1] = 0b10001011011010100100100011011111;
    origin.bits[2] = 0b00011100010100011001001100010001;
    origin.bits[3] = 0b10000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest20) {
    // 1357
    s21_decimal src1, src2, origin;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010010000011011110010110111111;
    origin.bits[1] = 0b10100111010011100111001000100001;
    origin.bits[2] = 0b00011100010100111001110111101101;
    origin.bits[3] = 0b10000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest21) {
    // 1383
    s21_decimal src1, src2, origin;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010010000011011110010110111111;
    origin.bits[1] = 0b10100111010011100111001000100001;
    origin.bits[2] = 0b00011100010100111001110111101101;
    origin.bits[3] = 0b00000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest22) {
    // 1409
    s21_decimal src1, src2, origin;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10010010000001100111100010100101;
    origin.bits[1] = 0b10001011011010100100100011011111;
    origin.bits[2] = 0b00011100010100011001001100010001;
    origin.bits[3] = 0b00000000000100010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest23) {
    // 1435
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest24) {
    // 1461
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest25) {
    // 1487
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest26) {
    // 1513
    s21_decimal src1, src2, origin;
    // src1 = 792281625142643375935439503;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00101000111101011100001010001111;
    src1.bits[1] = 0b11110101110000101000111101011100;
    src1.bits[2] = 0b00000010100011110101110000101000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00101000111101011100001010010000;
    origin.bits[1] = 0b11110101110000101000111101011100;
    origin.bits[2] = 0b00000010100011110101110000101000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest27) {
    // 1539
    s21_decimal src1, src2, origin;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01011011000111100101100000001101;
    origin.bits[1] = 0b01101101111100110111111101100111;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest28) {
    // 1565
    s21_decimal src1, src2, origin;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11101000101010001011011101111000;
    origin.bits[1] = 0b00000000000111110100000111110001;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest29) {
    // 1591
    s21_decimal src1, src2, origin;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00001110111111111010100000101010;
    origin.bits[1] = 0b00101001110101100000001000110100;
    origin.bits[2] = 0b00000000000001011111000010100001;
    origin.bits[3] = 0b10000000000110000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest30) {
    // 1617
    s21_decimal src1, src2, origin;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11010010100100100111101010001100;
    origin.bits[1] = 0b10011110100111100111000100000100;
    origin.bits[2] = 0b00011111101010011000000100111000;
    origin.bits[3] = 0b10000000000011000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest31) {
    // 1643
    s21_decimal src1, src2, origin;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01011010101111100101111101110011;
    origin.bits[1] = 0b00101101001111010011000001101000;
    origin.bits[2] = 0b00000100101010001101010101010111;
    origin.bits[3] = 0b10000000000111000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest32) {
    // 1669
    s21_decimal src1, src2, origin;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10111000010101011100100001001001;
    origin.bits[1] = 0b01100110100011011000001100010111;
    origin.bits[2] = 0b00011100011001100111011011000001;
    origin.bits[3] = 0b10000000000010000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_subTest33) {
    // 1695
    s21_decimal src1, src2, origin;
    // src1 = -7922816251426433759354395033;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10011001100110011001100110011001;
    src1.bits[1] = 0b10011001100110011001100110011001;
    src1.bits[2] = 0b00011001100110011001100110011001;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_sub(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10011001100110011001100110011010;
    origin.bits[1] = 0b10011001100110011001100110011001;
    origin.bits[2] = 0b00011001100110011001100110011001;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest1) {
    // 1721
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest2) {
    // 1747
    s21_decimal src1, src2, origin;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest3) {
    // 1773
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest4) {
    // 1799
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest5) {
    // 1825
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest6) {
    // 1851
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest7) {
    // 1877
    s21_decimal src1, src2, origin;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00011100110011110011101011000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest8) {
    // 1903
    s21_decimal src1, src2, origin;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00010111010001100111010001101100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest9) {
    // 1929
    s21_decimal src1, src2, origin;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00010011100100010101101110010110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest10) {
    // 1955
    s21_decimal src1, src2, origin;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000001011001000011001100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest11) {
    // 1981
    s21_decimal src1, src2, origin;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111101101100110001110000110001;
    origin.bits[1] = 0b00000000000000000000000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest12) {
    // 2007
    s21_decimal src1, src2, origin;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11100110011101111000010101001111;
    origin.bits[1] = 0b00000000000000000000000000000110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest13) {
    // 2033
    s21_decimal src1, src2, origin;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10001001111001111111111111111111;
    origin.bits[1] = 0b10001010110001110010001100000100;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest14) {
    // 2059
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111111;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest15) {
    // 2085
    s21_decimal src1, src2, origin;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest16) {
    // 2111
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest17) {
    // 2137
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest18) {
    // 2163
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest19) {
    // 2189
    s21_decimal src1, src2, origin;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111111;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b11111111111111111111111111111111;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest20) {
    // 2215
    s21_decimal src1, src2, origin;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01011111001100010111011110111010;
    origin.bits[1] = 0b01000100111111001101101110110001;
    origin.bits[2] = 0b00000001101011100011011100011110;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest21) {
    // 2241
    s21_decimal src1, src2, origin;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11000100010110100111001000111001;
    origin.bits[1] = 0b01100100100011011110110011010011;
    origin.bits[2] = 0b00000000000001001101011111010011;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mulTest22) {
    // 2267
    s21_decimal src1, src2, origin;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mul(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b11111111111111111111111111111111;
    origin.bits[1] = 0b11111111111111111111111111111111;
    origin.bits[2] = 0b11111111111111111111111111111111;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest1) {
    // 2293
    s21_decimal src1, origin;
    // src1 = 2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest2) {
    // 2314
    s21_decimal src1, origin;
    // src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000100011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest3) {
    // 2335
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest4) {
    // 2356
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest5) {
    // 2377
    s21_decimal src1, origin;
    // src1 = -9878798789;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001100110100101000000111000101;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest6) {
    // 2398
    s21_decimal src1, origin;
    // src1 = -545454512454545.35265454545645;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10000010111000100101101011101101;
    origin.bits[1] = 0b11111001111010000010010110101101;
    origin.bits[2] = 0b10110000001111101111000010010100;
    origin.bits[3] = 0b00000000000011100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest7) {
    // 2419
    s21_decimal src1, origin;
    // src1 = -5.492654545456454545645464;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000111100110110001111110011000;
    src1.bits[1] = 0b01100110010010001001000110100011;
    src1.bits[2] = 0b00000000000001001000101100011101;
    src1.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000111100110110001111110011000;
    origin.bits[1] = 0b01100110010010001001000110100011;
    origin.bits[2] = 0b00000000000001001000101100011101;
    origin.bits[3] = 0b00000000000110000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest8) {
    // 2440
    s21_decimal src1, origin;
    // src1 = 7961327845421.879754123131254;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001110111001000011100101110110;
    origin.bits[1] = 0b01001011001101011010000111011001;
    origin.bits[2] = 0b00011001101110010111010010111111;
    origin.bits[3] = 0b10000000000011110000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest9) {
    // 2461
    s21_decimal src1, origin;
    // src1 = -12345677.187654345678987654346;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01111000100010101111010011001010;
    src1.bits[1] = 0b01100010000010101110010010000111;
    src1.bits[2] = 0b00100111111001000001101011010101;
    src1.bits[3] = 0b10000000000101010000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01111000100010101111010011001010;
    origin.bits[1] = 0b01100010000010101110010010000111;
    origin.bits[2] = 0b00100111111001000001101011010101;
    origin.bits[3] = 0b00000000000101010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest10) {
    // 2482
    s21_decimal src1, origin;
    // src1 = 2.5086531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01100101111011101101100101011111;
    src1.bits[1] = 0b01011100001001010100001101000110;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01100101111011101101100101011111;
    origin.bits[1] = 0b01011100001001010100001101000110;
    origin.bits[2] = 0b00000000000000000000000000000001;
    origin.bits[3] = 0b10000000000100110000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negateTest11) {
    // 2503
    s21_decimal src1, origin;
    // src1 = 1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_negate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_is_lessTest1) {
    // 2524
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest2) {
    // 2542
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest3) {
    // 2560
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest4) {
    // 2578
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest5) {
    // 2596
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest6) {
    // 2614
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest7) {
    // 2632
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest8) {
    // 2650
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest9) {
    // 2668
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest10) {
    // 2686
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest11) {
    // 2704
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest12) {
    // 2722
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest13) {
    // 2740
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest14) {
    // 2758
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest15) {
    // 2776
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest16) {
    // 2794
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest17) {
    // 2812
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest18) {
    // 2830
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest19) {
    // 2848
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest20) {
    // 2866
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest21) {
    // 2884
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest22) {
    // 2902
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest23) {
    // 2920
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest24) {
    // 2938
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest25) {
    // 2956
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest26) {
    // 2974
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest27) {
    // 2992
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest28) {
    // 3010
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest29) {
    // 3028
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest30) {
    // 3046
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest31) {
    // 3064
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest32) {
    // 3082
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest33) {
    // 3100
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest34) {
    // 3118
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest35) {
    // 3136
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_lessTest36) {
    // 3154
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_less(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest1) {
    // 3172
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest2) {
    // 3190
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest3) {
    // 3208
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest4) {
    // 3226
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest5) {
    // 3244
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest6) {
    // 3262
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest7) {
    // 3280
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest8) {
    // 3298
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest9) {
    // 3316
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest10) {
    // 3334
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest11) {
    // 3352
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest12) {
    // 3370
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest13) {
    // 3388
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest14) {
    // 3406
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest15) {
    // 3424
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest16) {
    // 3442
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest17) {
    // 3460
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest18) {
    // 3478
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest19) {
    // 3496
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest20) {
    // 3514
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest21) {
    // 3532
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest22) {
    // 3550
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest23) {
    // 3568
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest24) {
    // 3586
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest25) {
    // 3604
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest26) {
    // 3622
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest27) {
    // 3640
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest28) {
    // 3658
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest29) {
    // 3676
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest30) {
    // 3694
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest31) {
    // 3712
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest32) {
    // 3730
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest33) {
    // 3748
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest34) {
    // 3766
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest35) {
    // 3784
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_less_or_equalTest36) {
    // 3802
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_less_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest1) {
    // 3820
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest2) {
    // 3838
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest3) {
    // 3856
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest4) {
    // 3874
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest5) {
    // 3892
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest6) {
    // 3910
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest7) {
    // 3928
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest8) {
    // 3946
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest9) {
    // 3964
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest10) {
    // 3982
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest11) {
    // 4000
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest12) {
    // 4018
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest13) {
    // 4036
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest14) {
    // 4054
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest15) {
    // 4072
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest16) {
    // 4090
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest17) {
    // 4108
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest18) {
    // 4126
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest19) {
    // 4144
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest20) {
    // 4162
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest21) {
    // 4180
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest22) {
    // 4198
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest23) {
    // 4216
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest24) {
    // 4234
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest25) {
    // 4252
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest26) {
    // 4270
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest27) {
    // 4288
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest28) {
    // 4306
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest29) {
    // 4324
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest30) {
    // 4342
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest31) {
    // 4360
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest32) {
    // 4378
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest33) {
    // 4396
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest34) {
    // 4414
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest35) {
    // 4432
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest36) {
    // 4450
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_greater(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest1) {
    // 4468
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest2) {
    // 4486
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest3) {
    // 4504
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest4) {
    // 4522
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest5) {
    // 4540
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest6) {
    // 4558
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest7) {
    // 4576
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest8) {
    // 4594
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest9) {
    // 4612
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest10) {
    // 4630
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest11) {
    // 4648
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest12) {
    // 4666
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest13) {
    // 4684
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest14) {
    // 4702
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest15) {
    // 4720
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest16) {
    // 4738
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest17) {
    // 4756
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest18) {
    // 4774
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest19) {
    // 4792
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest20) {
    // 4810
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest21) {
    // 4828
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest22) {
    // 4846
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest23) {
    // 4864
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest24) {
    // 4882
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest25) {
    // 4900
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest26) {
    // 4918
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest27) {
    // 4936
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest28) {
    // 4954
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest29) {
    // 4972
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest30) {
    // 4990
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest31) {
    // 5008
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest32) {
    // 5026
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest33) {
    // 5044
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest34) {
    // 5062
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest35) {
    // 5080
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equalTest36) {
    // 5098
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_greater_or_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest1) {
    // 5116
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest2) {
    // 5134
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest3) {
    // 5152
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest4) {
    // 5170
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest5) {
    // 5188
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest6) {
    // 5206
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest7) {
    // 5224
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest8) {
    // 5242
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest9) {
    // 5260
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest10) {
    // 5278
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest11) {
    // 5296
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest12) {
    // 5314
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest13) {
    // 5332
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest14) {
    // 5350
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest15) {
    // 5368
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest16) {
    // 5386
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest17) {
    // 5404
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest18) {
    // 5422
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest19) {
    // 5440
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest20) {
    // 5458
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest21) {
    // 5476
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest22) {
    // 5494
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest23) {
    // 5512
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest24) {
    // 5530
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest25) {
    // 5548
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest26) {
    // 5566
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest27) {
    // 5584
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest28) {
    // 5602
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest29) {
    // 5620
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest30) {
    // 5638
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest31) {
    // 5656
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest32) {
    // 5674
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest33) {
    // 5692
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest34) {
    // 5710
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest35) {
    // 5728
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_equalTest36) {
    // 5746
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest1) {
    // 5764
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest2) {
    // 5782
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest3) {
    // 5800
    s21_decimal src1, src2;
    // src1 = 3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest4) {
    // 5818
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest5) {
    // 5836
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest6) {
    // 5854
    s21_decimal src1, src2;
    // src1 = 2;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest7) {
    // 5872
    s21_decimal src1, src2;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest8) {
    // 5890
    s21_decimal src1, src2;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest9) {
    // 5908
    s21_decimal src1, src2;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest10) {
    // 5926
    s21_decimal src1, src2;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest11) {
    // 5944
    s21_decimal src1, src2;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest12) {
    // 5962
    s21_decimal src1, src2;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest13) {
    // 5980
    s21_decimal src1, src2;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest14) {
    // 5998
    s21_decimal src1, src2;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest15) {
    // 6016
    s21_decimal src1, src2;
    // src1 = 18446744073709551615.0;
    // src2 = 965453154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111110110;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000001001;
    src1.bits[3] = 0b00000000000000010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00111001100010111010010101100010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest16) {
    // 6034
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = 54564654;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011010000001001011100101110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest17) {
    // 6052
    s21_decimal src1, src2;
    // src1 = -545454512454545.35265454545645;
    // src2 = -5.352654545456454545645464;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001000000110110001111110011000;
    src2.bits[1] = 0b11111011111111011000100101101101;
    src2.bits[2] = 0b00000000000001000110110101110111;
    src2.bits[3] = 0b10000000000110000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest18) {
    // 6070
    s21_decimal src1, src2;
    // src1 = 7961327845421.879754123131254;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest19) {
    // 6088
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest20) {
    // 6106
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = 87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b00000000000100000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest21) {
    // 6124
    s21_decimal src1, src2;
    // src1 = 12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b00000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest22) {
    // 6142
    s21_decimal src1, src2;
    // src1 = -12345677.987654345678987654346;
    // src2 = -87654323456.9876545678987653;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10010001000010101111010011001010;
    src1.bits[1] = 0b11000000010001011101010111110010;
    src1.bits[2] = 0b00100111111001000001101100000000;
    src1.bits[3] = 0b10000000000101010000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010001110011011101000110000101;
    src2.bits[1] = 0b11110101101111000110111111000000;
    src2.bits[2] = 0b00000010110101010000111100111111;
    src2.bits[3] = 0b10000000000100000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest23) {
    // 6160
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest24) {
    // 6178
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest25) {
    // 6196
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = 0;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000000;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 1;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest26) {
    // 6214
    s21_decimal src1, src2;
    // src1 = 79228162514264337593543950335;
    // src2 = -1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest27) {
    // 6232
    s21_decimal src1, src2;
    // src1 = 7922816251427554395;
    // src2 = 65645646;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011111000010000000010001011011;
    src1.bits[1] = 0b01101101111100110111111101100111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000011111010011010110001001110;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest28) {
    // 6250
    s21_decimal src1, src2;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest29) {
    // 6268
    s21_decimal src1, src2;
    // src1 = 2.7986531268974139743;
    // src2 = 9.979623121254565121244554;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111110100100001101100101011111;
    src1.bits[1] = 0b10000100011001000010000111101000;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11010100101011100011110110001010;
    src2.bits[1] = 0b01110100000101000010011110100011;
    src2.bits[2] = 0b00000000000010000100000101000100;
    src2.bits[3] = 0b00000000000110000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest30) {
    // 6286
    s21_decimal src1, src2;
    // src1 = -9798956154578676.797564534156;
    // src2 = -2156878451.854764;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01010100010000000011110110001100;
    src1.bits[1] = 0b10001011010100100000010101011001;
    src1.bits[2] = 0b00011111101010011000000110101101;
    src1.bits[3] = 0b10000000000011000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01100101111100100100110110101100;
    src2.bits[1] = 0b00000000000001111010100110101011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000001100000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest31) {
    // 6304
    s21_decimal src1, src2;
    // src1 = 0.5456465465486476846545465485;
    // src2 = 0.68985125146545154;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00001011000011110111000010001101;
    src1.bits[1] = 0b10010110101100000101100101010001;
    src1.bits[2] = 0b00010001101000010111101110000001;
    src1.bits[3] = 0b00000000000111000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010111001001010100110000000010;
    src2.bits[1] = 0b00000000111101010001010110011011;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest32) {
    // 6322
    s21_decimal src1, src2;
    // src1 = -0.77545545454546589781;
    // src2 = 87894515154546456456;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101100001010000001100001010101;
    src1.bits[1] = 0b00110100001010010001111010111100;
    src1.bits[2] = 0b00000000000000000000000000000100;
    src1.bits[3] = 0b10000000000101000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010011111011011111011110001000;
    src2.bits[1] = 0b11000011110010000000101111011001;
    src2.bits[2] = 0b00000000000000000000000000000100;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest33) {
    // 6340
    s21_decimal src1, src2;
    // src1 = -79228162514264337593543950335;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b11111111111111111111111111111111;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest34) {
    // 6358
    s21_decimal src1, src2;
    // src1 = 32323465788987654;
    // src2 = 67543278.89765424354657687;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01011000010000110001100100000110;
    src1.bits[1] = 0b00000000011100101101011000000101;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b10111110000100011000010110010111;
    src2.bits[1] = 0b11011001001111010001001011000110;
    src2.bits[2] = 0b00000000000001011001011001001000;
    src2.bits[3] = 0b00000000000100010000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest35) {
    // 6376
    s21_decimal src1, src2;
    // src1 = -784515454.7989898652154545652;
    // src2 = -579895323215489956.67897455465;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110001001110110100010111110100;
    src1.bits[1] = 0b00111000100000111010110010000001;
    src1.bits[2] = 0b00011001010110010101110000011000;
    src1.bits[3] = 0b10000000000100110000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11100110001001011001001101101001;
    src2.bits[1] = 0b00111000110110101110001010110100;
    src2.bits[2] = 0b10111011010111111101000100011110;
    src2.bits[3] = 0b10000000000010110000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_not_equalTest36) {
    // 6394
    s21_decimal src1, src2;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    int result = s21_is_not_equal(src1, src2);
    int origin = 0;
    ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest1) {
    // 6412
    int src1 = 1;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest2) {
    // 6428
    int src1 = -1;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest3) {
    // 6444
    int src1 = 0;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest4) {
    // 6460
    int src1 = 0;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest5) {
    // 6476
    int src1 = -987879878;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00111010111000011101100111000110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest6) {
    // 6492
    int src1 = -2147483646;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01111111111111111111111111111110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest7) {
    // 6508
    int src1 = 2147483646;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01111111111111111111111111111110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest8) {
    // 6524
    int src1 = 796132784;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00101111011101000000010110110000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest9) {
    // 6540
    int src1 = -12345677;
    s21_decimal origin, result;
    s21_decimal *res = &result;
    s21_from_int_to_decimal(src1, res);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000101111000110000101001101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest1) {
    // 6556
    s21_decimal src1;
    // src1 = 2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 2);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest2) {
    // 6570
    s21_decimal src1;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest3) {
    // 6584
    s21_decimal src1;
    // src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 3);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest4) {
    // 6598
    s21_decimal src1;
    // src1 = 4.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000101101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest5) {
    // 6612
    s21_decimal src1;
    // src1 = -4.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000101101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -4);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest6) {
    // 6626
    s21_decimal src1;
    // src1 = -5454.3526545;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10110011000011000010101010010001;
    src1.bits[1] = 0b00000000000000000000000000001100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000001110000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -5454);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest7) {
    // 6640
    s21_decimal src1;
    // src1 = -5.492654545456454545645464;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000111100110110001111110011000;
    src1.bits[1] = 0b01100110010010001001000110100011;
    src1.bits[2] = 0b00000000000001001000101100011101;
    src1.bits[3] = 0b10000000000110000000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -5);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest8) {
    // 6654
    s21_decimal src1;
    // src1 = 796132784.879754;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00011011110101100011100010001010;
    src1.bits[1] = 0b00000000000000101101010000010100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000001100000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 796132784);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest9) {
    // 6668
    s21_decimal src1;
    // src1 = -12345677.187654345678987654346;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01111000100010101111010011001010;
    src1.bits[1] = 0b01100010000010101110010010000111;
    src1.bits[2] = 0b00100111111001000001101011010101;
    src1.bits[3] = 0b10000000000101010000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -12345677);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest10) {
    // 6682
    s21_decimal src1;
    // src1 = 2.5086531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01100101111011101101100101011111;
    src1.bits[1] = 0b01011100001001010100001101000110;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 2);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest11) {
    // 6696
    s21_decimal src1;
    // src1 = 1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest12) {
    // 6710
    s21_decimal src1;
    // src1 = 1.25;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000001111101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000100000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest13) {
    // 6724
    s21_decimal src1;
    // src1 = -1.25;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000001111101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000100000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest14) {
    // 6738
    s21_decimal src1;
    // src1 = -12.25;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000010011001001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000100000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -12);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest15) {
    // 6752
    s21_decimal src1;
    // src1 = -3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    int result;
    int *res = &result;
    s21_from_decimal_to_int(src1, res);
    ck_assert_int_eq(result, -3);
}
END_TEST

START_TEST(s21_truncateTest1) {
    // 6766
    s21_decimal src1, origin;
    // src1 = 2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest2) {
    // 6787
    s21_decimal src1, origin;
    // src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest3) {
    // 6808
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest4) {
    // 6829
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest5) {
    // 6850
    s21_decimal src1, origin;
    // src1 = -9878798789;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001100110100101000000111000101;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest6) {
    // 6871
    s21_decimal src1, origin;
    // src1 = -545454512454545.35265454545645;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10000110011101001011101110010001;
    origin.bits[1] = 0b00000000000000011111000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest7) {
    // 6892
    s21_decimal src1, origin;
    // src1 = -5.492654545456454545645464;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000111100110110001111110011000;
    src1.bits[1] = 0b01100110010010001001000110100011;
    src1.bits[2] = 0b00000000000001001000101100011101;
    src1.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest8) {
    // 6913
    s21_decimal src1, origin;
    // src1 = 7961327845421.879754123131254;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10100100000111100100000000101101;
    origin.bits[1] = 0b00000000000000000000011100111101;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest9) {
    // 6934
    s21_decimal src1, origin;
    // src1 = -12345677.187654345678987654346;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01111000100010101111010011001010;
    src1.bits[1] = 0b01100010000010101110010010000111;
    src1.bits[2] = 0b00100111111001000001101011010101;
    src1.bits[3] = 0b10000000000101010000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000101111000110000101001101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest10) {
    // 6955
    s21_decimal src1, origin;
    // src1 = 2.5086531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01100101111011101101100101011111;
    src1.bits[1] = 0b01011100001001010100001101000110;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncateTest11) {
    // 6976
    s21_decimal src1, origin;
    // src1 = 1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_truncate(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest1) {
    // 6997
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = 2546.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000110001101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", 2546.5);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest2) {
    // 7016
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = -0.46453;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000001011010101110101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000001010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", -0.46453);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest3) {
    // 7035
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", 3.5);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest4) {
    // 7054
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = 4.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000101101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", 4.5);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest5) {
    // 7073
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = -4.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000101101;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", -4.5);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest6) {
    // 7092
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = -5.49265;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000010000110000110010001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000001010000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", -5.49265);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_from_decimal_to_floatTest7) {
    // 7111
    s21_decimal src1;

    float src2;
    float *srcp = &src2;
    // s21_decimal src1 = 2.5086531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01100101111011101101100101011111;
    src1.bits[1] = 0b01011100001001010100001101000110;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    s21_from_decimal_to_float(src1, srcp);
    char var3str[1000];
    char result[1000];
    snprintf(var3str, sizeof(var3str), "%.6f", 2.50865312689741);
    snprintf(result, sizeof(result), "%f", src2);
    ck_assert_str_eq(result, var3str);
}
END_TEST

START_TEST(s21_floorTest1) {
    // 7130
    s21_decimal src1, origin;
    // src1 = 2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest2) {
    // 7151
    s21_decimal src1, origin;
    // src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest3) {
    // 7172
    s21_decimal src1, origin;
    // src1 = -3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest4) {
    // 7193
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest5) {
    // 7214
    s21_decimal src1, origin;
    // src1 = -1.2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest6) {
    // 7235
    s21_decimal src1, origin;
    // src1 = -545454512454545.35265454545645;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10000010111000100101101011101101;
    src1.bits[1] = 0b11111001111010000010010110101101;
    src1.bits[2] = 0b10110000001111101111000010010100;
    src1.bits[3] = 0b10000000000011100000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10000110011101001011101110010010;
    origin.bits[1] = 0b00000000000000011111000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest7) {
    // 7256
    s21_decimal src1, origin;
    // src1 = -5.492654545456454545645464;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000111100110110001111110011000;
    src1.bits[1] = 0b01100110010010001001000110100011;
    src1.bits[2] = 0b00000000000001001000101100011101;
    src1.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest8) {
    // 7277
    s21_decimal src1, origin;
    // src1 = 7961327845421.879754123131254;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10100100000111100100000000101101;
    origin.bits[1] = 0b00000000000000000000011100111101;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest9) {
    // 7298
    s21_decimal src1, origin;
    // src1 = -12345677.187654345678987654346;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01111000100010101111010011001010;
    src1.bits[1] = 0b01100010000010101110010010000111;
    src1.bits[2] = 0b00100111111001000001101011010101;
    src1.bits[3] = 0b10000000000101010000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000101111000110000101001110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest10) {
    // 7319
    s21_decimal src1, origin;
    // src1 = 2.1986531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00010010001110001101100101011111;
    src1.bits[1] = 0b00110001000111111101100110110011;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floorTest11) {
    // 7340
    s21_decimal src1, origin;
    // src1 = 1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_floor(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest1) {
    // 7361
    float src1 = 2;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest2) {
    // 7378
    float src1 = 0;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest3) {
    // 7394
    float src1 = 3.5;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000100011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest4) {
    // 7410
    float src1 = 4.5;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000101101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest5) {
    // 7426
    float src1 = -4.5;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000101101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000010000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest6) {
    // 7442
    float src1 = -5454.353;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000010100110011101000010001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000110000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest7) {
    // 7458
    float src1 = -5.492654;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000010100111100111110101110;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000001100000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest8) {
    // 7474
    float src1 = 7.961328E+08;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00101111011101000000010111000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_from_float_to_decimalTest9) {
    // 7490
    float src1 = -1.234568E+07;
    s21_decimal result, origin;
    // s21_decimal *res = &result;
    s21_from_float_to_decimal(src1, &result);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000101111000110000101010000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest1) {
    // 7506
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest2) {
    // 7532
    s21_decimal src1, src2, origin;
    // src1 = 3;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest3) {
    // 7558
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest4) {
    // 7584
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest5) {
    // 7610
    s21_decimal src1, src2, origin;
    // src1 = -3;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest6) {
    // 7636
    s21_decimal src1, src2, origin;
    // src1 = 2;
    // src2 = -5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest7) {
    // 7662
    s21_decimal src1, src2, origin;
    // src1 = 6521;
    // src2 = 74121;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000001100101111001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000010010000110001001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000001100101111001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest8) {
    // 7688
    s21_decimal src1, src2, origin;
    // src1 = 4;
    // src2 = 97623323;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000101110100011001110100011011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest9) {
    // 7714
    s21_decimal src1, src2, origin;
    // src1 = 65658654;
    // src2 = 5;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000011111010011101111100011110;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000101;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest10) {
    // 7740
    s21_decimal src1, src2, origin;
    // src1 = -364748;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000001011001000011001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest11) {
    // 7766
    s21_decimal src1, src2, origin;
    // src1 = 1;
    // src2 = 98745654321;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b11111101101100110001110000110001;
    src2.bits[1] = 0b00000000000000000000000000010110;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest12) {
    // 7792
    s21_decimal src1, src2, origin;
    // src1 = -9878798789;
    // src2 = -3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest13) {
    // 7818
    s21_decimal src1, src2, origin;
    // src1 = 9999999999999999999;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10001001111001111111111111111111;
    src1.bits[1] = 0b10001010110001110010001100000100;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest14) {
    // 7844
    s21_decimal src1, src2, origin;
    // src1 = 18446744073709551615;
    // src2 = 1;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11111111111111111111111111111111;
    src1.bits[1] = 0b11111111111111111111111111111111;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000001;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest15) {
    // 7870
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest16) {
    // 7896
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 15;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000001111;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_modTest17) {
    // 7922
    s21_decimal src1, src2, origin;
    // src1 = 665464545;
    // src2 = 8798232189789785;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00100111101010100010111011100001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00010000010100101110011001011001;
    src2.bits[1] = 0b00000000000111110100000111110010;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_mod(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00100111101010100010111011100001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_divTest1) {
    // 7948
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 3;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000011;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_div(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_divTest2) {
    // 7974
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 2;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000000010;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_div(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_divTest3) {
    // 8000
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = 15;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b00000000000000000000000000001111;
    src2.bits[1] = 0b00000000000000000000000000000000;
    src2.bits[2] = 0b00000000000000000000000000000000;
    src2.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_div(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_divTest4) {
    // 8027
    s21_decimal src1, src2, origin;
    // src1 = 0;
    // src2 = -37986322154988653.784354545765;
    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    src2.value_type = s21_NORMAL_VALUE;
    src2.bits[0] = 0b01001111101101000110000001100101;
    src2.bits[1] = 0b01000010001101101011011001100001;
    src2.bits[2] = 0b01111010101111011000110010011010;
    src2.bits[3] = 0b10000000000011000000000000000000;
    s21_decimal result = s21_div(src1, src2);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_divTest5) {
    s21_decimal dst1;
    s21_decimal dst2;
    s21_decimal dst3;
    // int result = 0, sign = 0;
    s21_from_float_to_decimal(0.0, &dst1);
    s21_from_float_to_decimal(0.0, &dst2);
    dst1.value_type = 0;
    dst2.value_type = 0;
    dst3 = s21_div(dst1, dst2);
    ck_assert_int_eq(dst3.value_type, 3);
}
END_TEST

START_TEST(s21_divTest6) {
    s21_decimal dst1;
    s21_decimal dst2;
    s21_decimal dst3;
    int sign = 0;
    s21_from_float_to_decimal(0.0, &dst1);
    s21_from_float_to_decimal(12312.12, &dst2);
    dst1.value_type = 0;
    dst2.value_type = 0;
    dst3 = s21_div(dst1, dst2);
    char strTest[100] = "";
    char str[] = {
        "000000000000000000000000000000000000000000000000000000000000000000000000"
        "000000000000000000000000"};
    for (int i = 0; i <= 95; i++) {
        if (getBit(dst3, i))
            strTest[95 - i] = '1';
        else
            strTest[95 - i] = '0';
    }
    ck_assert_str_eq(strTest, str);
    if (getBit(dst3, 127)) sign = 0;
    ck_assert_int_eq(sign, 0);
    ck_assert_int_eq(dst3.value_type, 0);
}
END_TEST

START_TEST(s21_roundTest1) {
    // 8053
    s21_decimal src1, origin;
    // src1 = 2;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000010;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest2) {
    // 8074
    s21_decimal src1, origin;
    // src1 = 3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest3) {
    // 8095
    s21_decimal src1, origin;
    // src1 = -3.5;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000100011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000100;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest4) {
    // 8116
    s21_decimal src1, origin;
    // src1 = 0;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000000;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest5) {
    // 8137
    s21_decimal src1, origin;
    // src1 = -9878798789;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001100110100101000000111000101;
    src1.bits[1] = 0b00000000000000000000000000000010;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000000000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b01001100110100101000000111000101;
    origin.bits[1] = 0b00000000000000000000000000000010;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest6) {
    // 8158
    s21_decimal src1, origin;
    // src1 = -545454512454545.35265;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b11011110101101001010101001100001;
    src1.bits[1] = 0b11110100111110000101111011101001;
    src1.bits[2] = 0b00000000000000000000000000000010;
    src1.bits[3] = 0b10000000000001010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10000110011101001011101110010001;
    origin.bits[1] = 0b00000000000000011111000000010110;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest7) {
    // 8179
    s21_decimal src1, origin;
    // src1 = -5.492654545456454545645464;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000111100110110001111110011000;
    src1.bits[1] = 0b01100110010010001001000110100011;
    src1.bits[2] = 0b00000000000001001000101100011101;
    src1.bits[3] = 0b10000000000110000000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest8) {
    // 8200
    s21_decimal src1, origin;
    // src1 = 7961327845421.879754123131254;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01001110111001000011100101110110;
    src1.bits[1] = 0b01001011001101011010000111011001;
    src1.bits[2] = 0b00011001101110010111010010111111;
    src1.bits[3] = 0b00000000000011110000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b10100100000111100100000000101110;
    origin.bits[1] = 0b00000000000000000000011100111101;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest9) {
    // 8221
    s21_decimal src1, origin;
    // src1 = -12345677.187654345678987654346;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b01111000100010101111010011001010;
    src1.bits[1] = 0b01100010000010101110010010000111;
    src1.bits[2] = 0b00100111111001000001101011010101;
    src1.bits[3] = 0b10000000000101010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000101111000110000101001101;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest10) {
    // 8242
    s21_decimal src1, origin;
    // src1 = 2.5986531268974139743;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b10101111110010001101100101011111;
    src1.bits[1] = 0b01101000101000101011010010000001;
    src1.bits[2] = 0b00000000000000000000000000000001;
    src1.bits[3] = 0b00000000000100110000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000011;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest11) {
    // 8263
    s21_decimal src1, origin;
    // src1 = 1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000000001;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000000000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest12) {
    // 8284
    s21_decimal src1, origin;
    // src1 = 1.1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000001011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest13) {
    // 8305
    s21_decimal src1, origin;
    // src1 = -1.1;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000000000001011;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000010000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest14) {
    // 8326
    s21_decimal src1, origin;
    // src1 = 24.56;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000100110011000;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b00000000000000100000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000011001;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b00000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_roundTest15) {
    // 8347
    s21_decimal src1, origin;
    // src1 = -2.124;

    src1.value_type = s21_NORMAL_VALUE;
    src1.bits[0] = 0b00000000000000000000100001001100;
    src1.bits[1] = 0b00000000000000000000000000000000;
    src1.bits[2] = 0b00000000000000000000000000000000;
    src1.bits[3] = 0b10000000000000110000000000000000;
    s21_decimal result = s21_round(src1);
    origin.value_type = s21_NORMAL_VALUE;
    origin.bits[0] = 0b00000000000000000000000000000010;
    origin.bits[1] = 0b00000000000000000000000000000000;
    origin.bits[2] = 0b00000000000000000000000000000000;
    origin.bits[3] = 0b10000000000000000000000000000000;
    ck_assert_int_eq(origin.bits[3], result.bits[3]);
    ck_assert_int_eq(origin.bits[2], result.bits[2]);
    ck_assert_int_eq(origin.bits[1], result.bits[1]);
    ck_assert_int_eq(origin.bits[0], result.bits[0]);
    ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, s21_addTest1);
    tcase_add_test(tc1_1, s21_addTest2);
    tcase_add_test(tc1_1, s21_addTest3);
    tcase_add_test(tc1_1, s21_addTest4);
    tcase_add_test(tc1_1, s21_addTest5);
    tcase_add_test(tc1_1, s21_addTest6);
    tcase_add_test(tc1_1, s21_addTest7);
    tcase_add_test(tc1_1, s21_addTest8);
    tcase_add_test(tc1_1, s21_addTest9);
    tcase_add_test(tc1_1, s21_addTest10);
    tcase_add_test(tc1_1, s21_addTest11);
    tcase_add_test(tc1_1, s21_addTest12);
    tcase_add_test(tc1_1, s21_addTest13);
    tcase_add_test(tc1_1, s21_addTest14);
    tcase_add_test(tc1_1, s21_addTest15);
    tcase_add_test(tc1_1, s21_addTest16);
    tcase_add_test(tc1_1, s21_addTest17);
    tcase_add_test(tc1_1, s21_addTest18);
    tcase_add_test(tc1_1, s21_addTest19);
    tcase_add_test(tc1_1, s21_addTest20);
    tcase_add_test(tc1_1, s21_addTest21);
    tcase_add_test(tc1_1, s21_addTest22);
    tcase_add_test(tc1_1, s21_addTest23);
    tcase_add_test(tc1_1, s21_addTest24);
    tcase_add_test(tc1_1, s21_addTest25);
    tcase_add_test(tc1_1, s21_addTest26);
    tcase_add_test(tc1_1, s21_addTest27);
    tcase_add_test(tc1_1, s21_addTest28);
    tcase_add_test(tc1_1, s21_addTest29);
    tcase_add_test(tc1_1, s21_addTest30);
    tcase_add_test(tc1_1, s21_addTest31);
    tcase_add_test(tc1_1, s21_addTest32);
    tcase_add_test(tc1_1, s21_addTest33);
    tcase_add_test(tc1_1, s21_subTest1);
    tcase_add_test(tc1_1, s21_subTest2);
    tcase_add_test(tc1_1, s21_subTest3);
    tcase_add_test(tc1_1, s21_subTest4);
    tcase_add_test(tc1_1, s21_subTest5);
    tcase_add_test(tc1_1, s21_subTest6);
    tcase_add_test(tc1_1, s21_subTest7);
    tcase_add_test(tc1_1, s21_subTest8);
    tcase_add_test(tc1_1, s21_subTest9);
    tcase_add_test(tc1_1, s21_subTest10);
    tcase_add_test(tc1_1, s21_subTest11);
    tcase_add_test(tc1_1, s21_subTest12);
    tcase_add_test(tc1_1, s21_subTest13);
    tcase_add_test(tc1_1, s21_subTest14);
    tcase_add_test(tc1_1, s21_subTest15);
    tcase_add_test(tc1_1, s21_subTest16);
    tcase_add_test(tc1_1, s21_subTest17);
    tcase_add_test(tc1_1, s21_subTest18);
    tcase_add_test(tc1_1, s21_subTest19);
    tcase_add_test(tc1_1, s21_subTest20);
    tcase_add_test(tc1_1, s21_subTest21);
    tcase_add_test(tc1_1, s21_subTest22);
    tcase_add_test(tc1_1, s21_subTest23);
    tcase_add_test(tc1_1, s21_subTest24);
    tcase_add_test(tc1_1, s21_subTest25);
    tcase_add_test(tc1_1, s21_subTest26);
    tcase_add_test(tc1_1, s21_subTest27);
    tcase_add_test(tc1_1, s21_subTest28);
    tcase_add_test(tc1_1, s21_subTest29);
    tcase_add_test(tc1_1, s21_subTest30);
    tcase_add_test(tc1_1, s21_subTest31);
    tcase_add_test(tc1_1, s21_subTest32);
    tcase_add_test(tc1_1, s21_subTest33);
    tcase_add_test(tc1_1, s21_mulTest1);
    tcase_add_test(tc1_1, s21_mulTest2);
    tcase_add_test(tc1_1, s21_mulTest3);
    tcase_add_test(tc1_1, s21_mulTest4);
    tcase_add_test(tc1_1, s21_mulTest5);
    tcase_add_test(tc1_1, s21_mulTest6);
    tcase_add_test(tc1_1, s21_mulTest7);
    tcase_add_test(tc1_1, s21_mulTest8);
    tcase_add_test(tc1_1, s21_mulTest9);
    tcase_add_test(tc1_1, s21_mulTest10);
    tcase_add_test(tc1_1, s21_mulTest11);
    tcase_add_test(tc1_1, s21_mulTest12);
    tcase_add_test(tc1_1, s21_mulTest13);
    tcase_add_test(tc1_1, s21_mulTest14);
    tcase_add_test(tc1_1, s21_mulTest15);
    tcase_add_test(tc1_1, s21_mulTest16);
    tcase_add_test(tc1_1, s21_mulTest17);
    tcase_add_test(tc1_1, s21_mulTest18);
    tcase_add_test(tc1_1, s21_mulTest19);
    tcase_add_test(tc1_1, s21_mulTest20);
    tcase_add_test(tc1_1, s21_mulTest21);
    tcase_add_test(tc1_1, s21_mulTest22);
    tcase_add_test(tc1_1, s21_negateTest1);
    tcase_add_test(tc1_1, s21_negateTest2);
    tcase_add_test(tc1_1, s21_negateTest3);
    tcase_add_test(tc1_1, s21_negateTest4);
    tcase_add_test(tc1_1, s21_negateTest5);
    tcase_add_test(tc1_1, s21_negateTest6);
    tcase_add_test(tc1_1, s21_negateTest7);
    tcase_add_test(tc1_1, s21_negateTest8);
    tcase_add_test(tc1_1, s21_negateTest9);
    tcase_add_test(tc1_1, s21_negateTest10);
    tcase_add_test(tc1_1, s21_negateTest11);
    tcase_add_test(tc1_1, s21_is_lessTest1);
    tcase_add_test(tc1_1, s21_is_lessTest2);
    tcase_add_test(tc1_1, s21_is_lessTest3);
    tcase_add_test(tc1_1, s21_is_lessTest4);
    tcase_add_test(tc1_1, s21_is_lessTest5);
    tcase_add_test(tc1_1, s21_is_lessTest6);
    tcase_add_test(tc1_1, s21_is_lessTest7);
    tcase_add_test(tc1_1, s21_is_lessTest8);
    tcase_add_test(tc1_1, s21_is_lessTest9);
    tcase_add_test(tc1_1, s21_is_lessTest10);
    tcase_add_test(tc1_1, s21_is_lessTest11);
    tcase_add_test(tc1_1, s21_is_lessTest12);
    tcase_add_test(tc1_1, s21_is_lessTest13);
    tcase_add_test(tc1_1, s21_is_lessTest14);
    tcase_add_test(tc1_1, s21_is_lessTest15);
    tcase_add_test(tc1_1, s21_is_lessTest16);
    tcase_add_test(tc1_1, s21_is_lessTest17);
    tcase_add_test(tc1_1, s21_is_lessTest18);
    tcase_add_test(tc1_1, s21_is_lessTest19);
    tcase_add_test(tc1_1, s21_is_lessTest20);
    tcase_add_test(tc1_1, s21_is_lessTest21);
    tcase_add_test(tc1_1, s21_is_lessTest22);
    tcase_add_test(tc1_1, s21_is_lessTest23);
    tcase_add_test(tc1_1, s21_is_lessTest24);
    tcase_add_test(tc1_1, s21_is_lessTest25);
    tcase_add_test(tc1_1, s21_is_lessTest26);
    tcase_add_test(tc1_1, s21_is_lessTest27);
    tcase_add_test(tc1_1, s21_is_lessTest28);
    tcase_add_test(tc1_1, s21_is_lessTest29);
    tcase_add_test(tc1_1, s21_is_lessTest30);
    tcase_add_test(tc1_1, s21_is_lessTest31);
    tcase_add_test(tc1_1, s21_is_lessTest32);
    tcase_add_test(tc1_1, s21_is_lessTest33);
    tcase_add_test(tc1_1, s21_is_lessTest34);
    tcase_add_test(tc1_1, s21_is_lessTest35);
    tcase_add_test(tc1_1, s21_is_lessTest36);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest1);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest2);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest3);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest4);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest5);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest6);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest7);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest8);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest9);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest10);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest11);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest12);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest13);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest14);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest15);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest16);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest17);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest18);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest19);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest20);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest21);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest22);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest23);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest24);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest25);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest26);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest27);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest28);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest29);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest30);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest31);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest32);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest33);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest34);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest35);
    tcase_add_test(tc1_1, s21_is_less_or_equalTest36);
    tcase_add_test(tc1_1, s21_is_greaterTest1);
    tcase_add_test(tc1_1, s21_is_greaterTest2);
    tcase_add_test(tc1_1, s21_is_greaterTest3);
    tcase_add_test(tc1_1, s21_is_greaterTest4);
    tcase_add_test(tc1_1, s21_is_greaterTest5);
    tcase_add_test(tc1_1, s21_is_greaterTest6);
    tcase_add_test(tc1_1, s21_is_greaterTest7);
    tcase_add_test(tc1_1, s21_is_greaterTest8);
    tcase_add_test(tc1_1, s21_is_greaterTest9);
    tcase_add_test(tc1_1, s21_is_greaterTest10);
    tcase_add_test(tc1_1, s21_is_greaterTest11);
    tcase_add_test(tc1_1, s21_is_greaterTest12);
    tcase_add_test(tc1_1, s21_is_greaterTest13);
    tcase_add_test(tc1_1, s21_is_greaterTest14);
    tcase_add_test(tc1_1, s21_is_greaterTest15);
    tcase_add_test(tc1_1, s21_is_greaterTest16);
    tcase_add_test(tc1_1, s21_is_greaterTest17);
    tcase_add_test(tc1_1, s21_is_greaterTest18);
    tcase_add_test(tc1_1, s21_is_greaterTest19);
    tcase_add_test(tc1_1, s21_is_greaterTest20);
    tcase_add_test(tc1_1, s21_is_greaterTest21);
    tcase_add_test(tc1_1, s21_is_greaterTest22);
    tcase_add_test(tc1_1, s21_is_greaterTest23);
    tcase_add_test(tc1_1, s21_is_greaterTest24);
    tcase_add_test(tc1_1, s21_is_greaterTest25);
    tcase_add_test(tc1_1, s21_is_greaterTest26);
    tcase_add_test(tc1_1, s21_is_greaterTest27);
    tcase_add_test(tc1_1, s21_is_greaterTest28);
    tcase_add_test(tc1_1, s21_is_greaterTest29);
    tcase_add_test(tc1_1, s21_is_greaterTest30);
    tcase_add_test(tc1_1, s21_is_greaterTest31);
    tcase_add_test(tc1_1, s21_is_greaterTest32);
    tcase_add_test(tc1_1, s21_is_greaterTest33);
    tcase_add_test(tc1_1, s21_is_greaterTest34);
    tcase_add_test(tc1_1, s21_is_greaterTest35);
    tcase_add_test(tc1_1, s21_is_greaterTest36);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest1);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest2);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest3);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest4);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest5);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest6);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest7);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest8);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest9);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest10);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest11);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest12);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest13);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest14);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest15);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest16);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest17);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest18);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest19);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest20);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest21);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest22);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest23);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest24);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest25);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest26);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest27);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest28);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest29);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest30);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest31);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest32);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest33);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest34);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest35);
    tcase_add_test(tc1_1, s21_is_greater_or_equalTest36);
    tcase_add_test(tc1_1, s21_is_equalTest1);
    tcase_add_test(tc1_1, s21_is_equalTest2);
    tcase_add_test(tc1_1, s21_is_equalTest3);
    tcase_add_test(tc1_1, s21_is_equalTest4);
    tcase_add_test(tc1_1, s21_is_equalTest5);
    tcase_add_test(tc1_1, s21_is_equalTest6);
    tcase_add_test(tc1_1, s21_is_equalTest7);
    tcase_add_test(tc1_1, s21_is_equalTest8);
    tcase_add_test(tc1_1, s21_is_equalTest9);
    tcase_add_test(tc1_1, s21_is_equalTest10);
    tcase_add_test(tc1_1, s21_is_equalTest11);
    tcase_add_test(tc1_1, s21_is_equalTest12);
    tcase_add_test(tc1_1, s21_is_equalTest13);
    tcase_add_test(tc1_1, s21_is_equalTest14);
    tcase_add_test(tc1_1, s21_is_equalTest15);
    tcase_add_test(tc1_1, s21_is_equalTest16);
    tcase_add_test(tc1_1, s21_is_equalTest17);
    tcase_add_test(tc1_1, s21_is_equalTest18);
    tcase_add_test(tc1_1, s21_is_equalTest19);
    tcase_add_test(tc1_1, s21_is_equalTest20);
    tcase_add_test(tc1_1, s21_is_equalTest21);
    tcase_add_test(tc1_1, s21_is_equalTest22);
    tcase_add_test(tc1_1, s21_is_equalTest23);
    tcase_add_test(tc1_1, s21_is_equalTest24);
    tcase_add_test(tc1_1, s21_is_equalTest25);
    tcase_add_test(tc1_1, s21_is_equalTest26);
    tcase_add_test(tc1_1, s21_is_equalTest27);
    tcase_add_test(tc1_1, s21_is_equalTest28);
    tcase_add_test(tc1_1, s21_is_equalTest29);
    tcase_add_test(tc1_1, s21_is_equalTest30);
    tcase_add_test(tc1_1, s21_is_equalTest31);
    tcase_add_test(tc1_1, s21_is_equalTest32);
    tcase_add_test(tc1_1, s21_is_equalTest33);
    tcase_add_test(tc1_1, s21_is_equalTest34);
    tcase_add_test(tc1_1, s21_is_equalTest35);
    tcase_add_test(tc1_1, s21_is_equalTest36);
    tcase_add_test(tc1_1, s21_is_not_equalTest1);
    tcase_add_test(tc1_1, s21_is_not_equalTest2);
    tcase_add_test(tc1_1, s21_is_not_equalTest3);
    tcase_add_test(tc1_1, s21_is_not_equalTest4);
    tcase_add_test(tc1_1, s21_is_not_equalTest5);
    tcase_add_test(tc1_1, s21_is_not_equalTest6);
    tcase_add_test(tc1_1, s21_is_not_equalTest7);
    tcase_add_test(tc1_1, s21_is_not_equalTest8);
    tcase_add_test(tc1_1, s21_is_not_equalTest9);
    tcase_add_test(tc1_1, s21_is_not_equalTest10);
    tcase_add_test(tc1_1, s21_is_not_equalTest11);
    tcase_add_test(tc1_1, s21_is_not_equalTest12);
    tcase_add_test(tc1_1, s21_is_not_equalTest13);
    tcase_add_test(tc1_1, s21_is_not_equalTest14);
    tcase_add_test(tc1_1, s21_is_not_equalTest15);
    tcase_add_test(tc1_1, s21_is_not_equalTest16);
    tcase_add_test(tc1_1, s21_is_not_equalTest17);
    tcase_add_test(tc1_1, s21_is_not_equalTest18);
    tcase_add_test(tc1_1, s21_is_not_equalTest19);
    tcase_add_test(tc1_1, s21_is_not_equalTest20);
    tcase_add_test(tc1_1, s21_is_not_equalTest21);
    tcase_add_test(tc1_1, s21_is_not_equalTest22);
    tcase_add_test(tc1_1, s21_is_not_equalTest23);
    tcase_add_test(tc1_1, s21_is_not_equalTest24);
    tcase_add_test(tc1_1, s21_is_not_equalTest25);
    tcase_add_test(tc1_1, s21_is_not_equalTest26);
    tcase_add_test(tc1_1, s21_is_not_equalTest27);
    tcase_add_test(tc1_1, s21_is_not_equalTest28);
    tcase_add_test(tc1_1, s21_is_not_equalTest29);
    tcase_add_test(tc1_1, s21_is_not_equalTest30);
    tcase_add_test(tc1_1, s21_is_not_equalTest31);
    tcase_add_test(tc1_1, s21_is_not_equalTest32);
    tcase_add_test(tc1_1, s21_is_not_equalTest33);
    tcase_add_test(tc1_1, s21_is_not_equalTest34);
    tcase_add_test(tc1_1, s21_is_not_equalTest35);
    tcase_add_test(tc1_1, s21_is_not_equalTest36);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest1);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest2);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest3);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest4);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest5);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest6);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest7);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest8);
    tcase_add_test(tc1_1, s21_from_int_to_decimalTest9);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest1);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest2);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest3);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest4);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest5);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest6);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest7);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest8);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest9);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest10);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest11);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest12);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest13);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest14);
    tcase_add_test(tc1_1, s21_from_decimal_to_intTest15);
    tcase_add_test(tc1_1, s21_truncateTest1);
    tcase_add_test(tc1_1, s21_truncateTest2);
    tcase_add_test(tc1_1, s21_truncateTest3);
    tcase_add_test(tc1_1, s21_truncateTest4);
    tcase_add_test(tc1_1, s21_truncateTest5);
    tcase_add_test(tc1_1, s21_truncateTest6);
    tcase_add_test(tc1_1, s21_truncateTest7);
    tcase_add_test(tc1_1, s21_truncateTest8);
    tcase_add_test(tc1_1, s21_truncateTest9);
    tcase_add_test(tc1_1, s21_truncateTest10);
    tcase_add_test(tc1_1, s21_truncateTest11);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest1);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest2);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest3);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest4);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest5);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest6);
    tcase_add_test(tc1_1, s21_from_decimal_to_floatTest7);
    tcase_add_test(tc1_1, s21_floorTest1);
    tcase_add_test(tc1_1, s21_floorTest2);
    tcase_add_test(tc1_1, s21_floorTest3);
    tcase_add_test(tc1_1, s21_floorTest4);
    tcase_add_test(tc1_1, s21_floorTest5);
    tcase_add_test(tc1_1, s21_floorTest6);
    tcase_add_test(tc1_1, s21_floorTest7);
    tcase_add_test(tc1_1, s21_floorTest8);
    tcase_add_test(tc1_1, s21_floorTest9);
    tcase_add_test(tc1_1, s21_floorTest10);
    tcase_add_test(tc1_1, s21_floorTest11);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest1);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest2);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest3);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest4);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest5);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest6);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest7);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest8);
    tcase_add_test(tc1_1, s21_from_float_to_decimalTest9);
    tcase_add_test(tc1_1, s21_modTest1);
    tcase_add_test(tc1_1, s21_modTest2);
    tcase_add_test(tc1_1, s21_modTest3);
    tcase_add_test(tc1_1, s21_modTest4);
    tcase_add_test(tc1_1, s21_modTest5);
    tcase_add_test(tc1_1, s21_modTest6);
    tcase_add_test(tc1_1, s21_modTest7);
    tcase_add_test(tc1_1, s21_modTest8);
    tcase_add_test(tc1_1, s21_modTest9);
    tcase_add_test(tc1_1, s21_modTest10);
    tcase_add_test(tc1_1, s21_modTest11);
    tcase_add_test(tc1_1, s21_modTest12);
    tcase_add_test(tc1_1, s21_modTest13);
    tcase_add_test(tc1_1, s21_modTest14);
    tcase_add_test(tc1_1, s21_modTest15);
    tcase_add_test(tc1_1, s21_modTest16);
    tcase_add_test(tc1_1, s21_modTest17);
    tcase_add_test(tc1_1, s21_divTest1);
    tcase_add_test(tc1_1, s21_divTest2);
    tcase_add_test(tc1_1, s21_divTest3);
    tcase_add_test(tc1_1, s21_divTest4);
    tcase_add_test(tc1_1, s21_divTest5);
    tcase_add_test(tc1_1, s21_divTest6);
    tcase_add_test(tc1_1, s21_roundTest1);
    tcase_add_test(tc1_1, s21_roundTest2);
    tcase_add_test(tc1_1, s21_roundTest3);
    tcase_add_test(tc1_1, s21_roundTest4);
    tcase_add_test(tc1_1, s21_roundTest5);
    tcase_add_test(tc1_1, s21_roundTest6);
    tcase_add_test(tc1_1, s21_roundTest7);
    tcase_add_test(tc1_1, s21_roundTest8);
    tcase_add_test(tc1_1, s21_roundTest9);
    tcase_add_test(tc1_1, s21_roundTest10);
    tcase_add_test(tc1_1, s21_roundTest11);
    tcase_add_test(tc1_1, s21_roundTest12);
    tcase_add_test(tc1_1, s21_roundTest13);
    tcase_add_test(tc1_1, s21_roundTest14);
    tcase_add_test(tc1_1, s21_roundTest15);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
