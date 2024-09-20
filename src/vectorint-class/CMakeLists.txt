cmake_minimum_required(VERSION 3.15)
project(
    VectorInt
    VERSION 1.0
    LANGUAGES CXX
)

#For all executables in project 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")

add_executable(vectorint vectorint.cpp main.cpp)
