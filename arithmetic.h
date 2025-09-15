/**
 * @file arithmetic.h
 * @brief Declaration of basic arithmetic functions.
 *
 * Provides function declarations for performing simple arithmetic 
 * operations: addition.
 *
 * @author Ashvin Ambatwar
 * @version 1.0
 * @date 2025-09-15
 */

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

/**
 * @file arithmetic.h
 * @brief Declaration of basic arithmetic functions.
 *
 * This header provides function declarations for performing
 * simple arithmetic operations:addition, subtraction,
 * multiplication, and division.
 */

/**
 * @brief Adds two integers.
 * @param a First operand
 * @param b Second operand
 * @return Sum of a and b
 */
int add(int a, int b);

/**
 * @brief Subtracts one integer from another.
 * @param a First operand
 * @param b Second operand
 * @return Result of a - b
 */
int subtract(int a, int b);

/**
 * @brief Multiplies two integers.
 * @param a First operand
 * @param b Second operand
 * @return Product of a and b
 */
int multiply(int a, int b);

/**
 * @brief Divides one integer by another.
 * @param a Numerator
 * @param b Denominator (must not be zero)
 * @return Result of a / b
 * @throws std::invalid_argument if b == 0
 */
double divide(int a, int b);

#endif // ARITHMETIC_H