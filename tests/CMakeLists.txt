enable_testing()

add_executable(test_arithmetic test_arithmetic.cpp)
target_link_libraries(test_arithmetic arithmetic)

add_test(NAME ArithmeticTests COMMAND test_arithmetic)
