cmake_minimum_required(VERSION 3.0)

Set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(matrix_library)

add_executable(
  example
  main.cpp
)
