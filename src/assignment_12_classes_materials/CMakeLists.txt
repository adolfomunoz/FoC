cmake_minimum_required (VERSION 3.5)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(BuildType)

project (assignment_12_memory_leaks)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if (MSVC)
  set(MY_CPP_FLAGS /W4 /W)
else()
  set(MY_CPP_FLAGS -Wall -Wextra -pedantic -Werror)
endif()

add_executable(find_memory_leaks find_memory_leaks.cpp)
target_compile_options(find_memory_leaks PRIVATE ${MY_CPP_FLAGS})

add_executable(incorrect_delete incorrect_delete.cpp)
target_compile_options(incorrect_delete PRIVATE ${MY_CPP_FLAGS})

add_executable(leak_factorial leak_factorial.cpp)
target_compile_options(leak_factorial PRIVATE ${MY_CPP_FLAGS})

add_executable(circular_dependency circular_dependency.cpp)
target_compile_options(circular_dependency PRIVATE ${MY_CPP_FLAGS})

if (CMAKE_BUILD_TYPE STREQUAL Debug)
  add_executable(buffer_overflow ../buffer_overflow.cpp)
  target_compile_options(buffer_overflow PRIVATE ${MY_CPP_FLAGS} -fsanitize=address)
  if (CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    target_link_options(buffer_overflow PRIVATE -fsanitize=address -static-libsan)
  else()
    target_link_options(buffer_overflow PRIVATE -fsanitize=address -static-libasan)
  endif()
endif()
