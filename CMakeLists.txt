cmake_minimum_required(VERSION 3.10)
project(arithmetic_project)

set(CMAKE_CXX_STANDARD 17)

add_library(arithmetic arithmetic.cpp)
add_executable(main main.cpp)
target_link_libraries(main arithmetic)

enable_testing()
add_subdirectory(tests)
