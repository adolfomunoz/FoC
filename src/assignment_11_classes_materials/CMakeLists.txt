cmake_minimum_required (VERSION 3.5)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(BuildType)

project (assignment_11_debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if (MSVC)
  set(MY_CPP_FLAGS /W4 /W)
else()
  set(MY_CPP_FLAGS -Wall -Wextra -pedantic -Werror)
endif()

add_executable(factorial factorial.cpp)
target_compile_options(factorial PRIVATE ${MY_CPP_FLAGS})

add_executable(segmentation_fault segmentation_fault.cpp)
target_compile_options(segmentation_fault PRIVATE ${MY_CPP_FLAGS})

add_executable(fixed_segmentation_fault fixed_segmentation_fault.cpp)
target_compile_options(fixed_segmentation_fault PRIVATE ${MY_CPP_FLAGS})

