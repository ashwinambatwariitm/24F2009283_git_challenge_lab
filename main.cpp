/**
 * @file main.cpp
 * @brief Entry point for the Arithmetic C++ project.
 *
 * This file provides a simple demonstration of arithmetic operations like 
 * addition and subtraction using functions defined in arithmetic.cpp. It serves as the 
 * driver code for testing functionality.
 * 
 * @author Ashvin Ambatwar
 * @version 1.0
 * @date 2025-09-15
 */

#include <iostream>
#include "arithmetic.h"


int main() {
    std::cout << "Arithmetic Project Started!" << std::endl;

    int a = 10, b = 5;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;

    return 0;
}
