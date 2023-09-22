
cmake_minimum_required(VERSION 3.0)

project(algocpp_numeric_test CXX)
set(CMAKE_CXX_STANDARD 20)

include_directories(./algocpp/includes/)

add_executable(csum csum.cpp)

target_link_libraries(csum gtest_main gtest)
