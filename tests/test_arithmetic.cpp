#include <iostream>
#include "../arithmetic.h"

int main() {
    int failures = 0;

    // Test Addition
    if (add(2, 3) != 5) { std::cerr << "Addition test failed\n"; failures++; }
    if (add(-1, 1) != 0) { std::cerr << "Addition with negatives failed\n"; failures++; }

    // Test Subtraction
    if (subtract(5, 3) != 2) { std::cerr << "Subtraction test failed\n"; failures++; }
    if (subtract(2, 4) != -2) { std::cerr << "Negative subtraction failed\n"; failures++; }

    // Test Multiplication
    if (multiply(2, 3) != 6) { std::cerr << "Multiplication test failed\n"; failures++; }
    if (multiply(-2, 3) != -6) { std::cerr << "Negative multiplication failed\n"; failures++; }

    if (failures == 0) {
        std::cout << "All tests passed!" << std::endl;
        return 0; // success
    } else {
        std::cerr << failures << " test(s) failed!" << std::endl;
        return 1; // failure
    }
}
