cmake_minimum_required(VERSION 3.3)
project(cpp_calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("include")

set(SOURCE_FILES main.cpp src/Sum.cpp src/Numbers.cpp)
add_executable(calculator ${SOURCE_FILES})