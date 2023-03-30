# Decimal Library

Implementation of my own decimal.h library.

## Contents

1. [Introduction](#introduction) 
2. [Chapter II](#chapter-ii) \
   2.1. [Information](#information)
3. [Chapter III](#chapter-iii) \
   3.1. [Part 1](#part-1-implementation-of-the-decimalh-library-functions)



## Introduction

In this project I implemented the decimal.h library in the C programming language. This library should add the ability to work with the "decimal" type, which is not in the language standard. Nevertheless, this type is critically important. For financial calculations, for example, where errors of calculations characteristic of types with floating point are unacceptable. As part of the project I worked with the tasks of processing financial information, dive into the issues of internal representation of different types of data, and solidify knowledge of structured programming.


## Chapter II

## Information

The Decimal value type represents decimal numbers ranging from positive 79,228,162,514,264,337,593,543,950,335 to negative 79,228,162,514,264,337,593,543,950,335. The default value of a Decimal is 0. The Decimal value type is appropriate for financial calculations that require large numbers of significant integral and fractional digits and no round-off errors. The Decimal type does not eliminate the need for rounding. Rather, it minimizes errors due to rounding.

When the result of the division and multiplication is passed to the Round method, the result suffers no loss of precision.

A decimal number is a floating-point value that consists of a sign, a numeric value where each digit in the value ranges from 0 to 9, and a scaling factor that indicates the position of a floating decimal point that separates the integral and fractional parts of the numeric value.

The binary representation of a Decimal value consists of a 1-bit sign, a 96-bit integer number, and a scaling factor used to divide the 96-bit integer and specify what portion of it is a decimal fraction. The scaling factor is implicitly the number 10, raised to an exponent ranging from 0 to 28. Therefore, the binary representation of a Decimal value the form, ((-2^96 to 2^96) / 10^(0 to 28)), where -(2^96-1) is equal to MinValue, and 2^96-1 is equal to MaxValue.

The scaling factor also can preserve any trailing zeros in a Decimal number. Trailing zeros do not affect the value of a Decimal number in arithmetic or comparison operations. 

### Binary representation

The binary representation of a Decimal number consists of a 1-bit sign, a 96-bit integer number, and a scaling factor used to divide the integer number and specify what portion of it is a decimal fraction. The scaling factor is implicitly the number 10, raised to an exponent ranging from 0 to 28.

Decimal number can be implemented as a four-element array of 32-bit signed integers (`int bits[4];`).

`bits[0]`, `bits[1]`, and `bits[2]` contain the low, middle, and high 32 bits of the 96-bit integer number accordingly.

`bits[3]` contains the scale factor and sign, and consists of following parts:
- Bits 0 to 15, the lower word, are unused and must be zero.
- Bits 16 to 23 must contain an exponent between 0 and 28, which indicates the power of 10 to divide the integer number.
- Bits 24 to 30 are unused and must be zero.
- Bit 31 contains the sign; 0 meaning positive, and 1 meaning negative.

Note that the bit representation differentiates between negative and positive zero. These values can be treated as being equal in all operations.

The value_type field contains information about the type of number, with the NORMAL_VALUE value, the bits array contains a number, with other values, all elements of the bits array are 0  

### Arithmetic Operators

| Operator name | Operators  | Function | 
| ------ | ------ | ------ |
| Addition | + | decimal add(decimal, decimal) |
| Subtraction | - | decimal sub(decimal, decimal) |
| Multiplication | * | decimal mul(decimal, decimal) | 
| Division | / | decimal div(decimal, decimal) |
| Modulo | Mod | decimal mod(decimal, decimal) |

If an error occurs during the operation, the error type is written to the value_type variable  

*Note on the numbers that do not fit into the mantissa:*
- *When getting numbers that do not fit into the mantissa during arithmetic operations, use bank rounding (for example, 79,228,162,514,264,337,593,543,950,335 - 0.6 = 79,228,162,514,264,337,593,543,950,334)*

*Note on the mod operation:*
- *If an overflow occurred as a result, discard the fractional part (for example, 70,000,000,000,000,000,000,000,000,000 % 0.001 = 0.000)*


### Comparison Operators

| Operator name | Operators  | Function | 
| ------ | ------ | ------ |
| Less than | < | int is_less(decimal, decimal) |
| Less than or equal to | <= | int is_less_or_equal(decimal, decimal) | 
| Greater than | > |  int is_greater(decimal, decimal) |
| Greater than or equal to | >= | int is_greater_or_equal(decimal, decimal) | 
| Equal to | == |  int is_equal(decimal, decimal) |
| Not equal to | != |  int is_not_equal(decimal, decimal) |

Return value:
- 0 - TRUE
- 1 - FALSE

### Convertors and parsers

| Convertor/parser | Function | 
| ------ | ------ |
| From int  | int from_int_to_decimal(int src, decimal *dst) |
| From float  | int from_float_to_decimal(float src, decimal *dst) |
| To int  | int from_decimal_to_int(decimal src, int *dst) |
| To float  | int from_decimal_to_float(decimal src, float *dst) |

Return value - code error:
- 0 - SUCCESS
- 1 - CONVERTING ERROR

*Note on the conversion of a float type number:*
- *If the numbers are too small (0 < |x| < 1e-28), return an error and value equal to 0, value_type = 0*
- *If the numbers are too large (|x| > 79,228,162,514,264,337,593,543,950,335) or are equal to infinity, return an error and value_type of infinity with the corresponding sign*
- *When processing a number with the float type, convert all the digits contained in it*

*Note on the conversion from decimal type to int:*
- *If there is a fractional part in a decimal number, it should be discarded (for example, 0.9 is converted to 0)*


### Another functions

| Description | Function | 
| ------ | ------ |
| Rounds a specified Decimal number to the closest integer toward negative infinity. | decimal floor(decimal) |	
| Rounds a decimal value to the nearest integer. | decimal round(decimal) |
| Returns the integral digits of the specified Decimal; any fractional digits are discarded, including trailing zeroes. | decimal truncate(decimal) |
| Returns the result of multiplying the specified Decimal value by negative one. | decimal negate(decimal) |


## Chapter III

## Part 1. Implementation of the decimal.h library functions

The functions of the decimal.h library described [above](#information) must be implemented:
- The library must be developed in C language of C11 standard using gcc compiler
- The library code must be located in the src folder on the develop branch   
- Do not use outdated and legacy language constructions and library functions. Pay attention to the legacy and obsolete marks in the official documentation on the language and the libraries used. Use the POSIX.1-2017 standard.
- Make it as a static library (with the decimal.h header file)
- The library must be developed according to the principles of structured programming;
- Use prefix  before each function
- Prepare full coverage of library functions code with unit-tests using the Check library
- Unit tests must cover at least 80% of each function (checked using gcov)   
- Provide a Makefile for building the library and tests (with targets all, clean, test, decimal.a, gcov_report)  
- The gcov_report target should generate a gcov report in the form of an html page. Unit tests must be run with gcov flags to do this
- When implementing decimal, stick to [the binary representation](#binary-representation) with the integer `bits` array as specified in the [example above](#example). Observe the position of the digits of a number in the `bits` array
- It is forbidden to use the __int128 type
- Trailing zeros can be as preserved as deleted (except for the `truncate` function)
- The defined type must support numbers from -79,228,162,514,264,337,593,543,950,335 to +79,228,162,514,264,337,593,543,950,335.
