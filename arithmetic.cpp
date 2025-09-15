// arithmetic.cpp
#include "arithmetic.h"
#include <stdexcept>

/**
 * @brief Adds two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts one integer from another.
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * @brief Multiplies two integers.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Divides one integer by another.
 * @throws std::invalid_argument if denominator is zero
 */
double divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return static_cast<double>(a) / b;
}