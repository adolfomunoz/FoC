cmake_minimum_required(VERSION 3.30)
project(
    Triangle
    VERSION 1.0
    LANGUAGES CXX
)

add_executable(triangle repeat.cpp triangle.cpp)
