# 24F2009283 Git Challenge Lab – Arithmetic C++ Project

A simple **C++ project** demonstrating basic arithmetic operations with **unit testing** using **CTest** and **CI/CD pipeline** via **GitHub Actions**.

---

## Features
- Performs basic arithmetic operations: **Addition, Subtraction, Multiplication, Division**  
- Unit tests implemented with **CTest**  
- Sanity check to ensure basic functionality  
- Automated **CI/CD pipeline** with **GitHub Actions**  
- Git branching strategy with feature branches and pull requests  

---

## Project Structure
24F2009283_git_challenge_lab/
├── CMakeLists.txt # Build configuration
├── src/
│ ├── arithmetic.cpp # Implementation of arithmetic functions
│ └── arithmetic.h # Function declarations
├── main.cpp # Program entry point
├── tests/
│ ├── CMakeLists.txt # CMake config for tests
│ └── test_arithmetic.cpp # Unit tests using CTest
└── .github/
└── workflows/
└── main.yml # GitHub Actions workflow for CI/CD
