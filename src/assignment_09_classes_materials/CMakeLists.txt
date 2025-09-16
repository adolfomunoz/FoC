cmake_minimum_required (VERSION 3.10)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(BuildType)

project (assignment_09_debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if (MSVC)
  set(MY_CPP_FLAGS /W4 /WX)
else()
  set(MY_CPP_FLAGS -Wall -Wextra -pedantic -Werror)
endif()

add_executable(simple_shared_ptr simple_shared_ptr.cpp)
target_compile_options(simple_shared_ptr PRIVATE ${MY_CPP_FLAGS})

add_executable(to_fix_memory_leaks to_fix_memory_leaks.cpp)
target_compile_options(to_fix_memory_leaks PRIVATE ${MY_CPP_FLAGS})

# add_executable(max_min_sp_2d_matrix max_min_sp_2d_matrix.cpp)
# target_compile_options(max_min_sp_2d_matrix PRIVATE ${MY_CPP_FLAGS})

