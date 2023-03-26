cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Main VERSION 0.0)
add_executable(Main src/main.cpp)

configure_file(include/version.hpp.in include/version.hpp)

target_include_directories(Main PUBLIC "${PROJECT_BINARY_DIR}/include")