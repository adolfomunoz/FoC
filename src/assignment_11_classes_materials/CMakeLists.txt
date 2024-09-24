cmake_minimum_required (VERSION 3.5)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(BuildType)

project (assignment_11_debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(factorial factorial.cpp)
if (MSVC)
  target_compile_options(factorial PRIVATE /W4 /WX)
else()
  target_compile_options(factorial PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

