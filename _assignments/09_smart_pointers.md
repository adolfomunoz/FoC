---
title: Smart Pointers
---

# Prerequisites

In this laboratory, you are going to write several small programs covering the
basic aspects of [smart pointers](https://en.cppreference.com/w/cpp/memory).
Please use the same compiler and setup that in previous laboratories. Please do
not forget to use these `CXXFLAGS` when compiling with `g++`: `-Wall -Wextra
-pedantic -Werror`. These flags would help you to write more solid code.
Ideally, you should use `cmake` as your building tool. Also, you could consider
adding the following lines to your `CMakeLists.txt` to ensure you are working on
C++17.

```
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```

Do not hesitate to contact the faculty in case of doubts about the exercises.

# Identify memory leaks and remove them

Identify all the memory leaks in the file `to_fix_memory_leaks.cpp` and
avoid them using smart pointers. This example only requires `std::unique_ptr`.

Please understand and run the original program before starting your solution.

```
{% include src/assignment_09_classes_materials/to_fix_memory_leaks.cpp %}
```

# Using shared pointers

Please describe what the following program does and answer the following questions:

1. How many objects (variables) are allocated in the stack and in the heap?
2. Can both `sp1` and `sp2` modify the object in the heap?
3. Does the destruction of `sp2` releases the memory allocated in the heap?

```
{% include src/assignment_09_classes_materials/simple_shared_ptr.cpp  %}
```

# Writing simple code with smart pointers

Starting from the `max_min_heap_2d_matrix.cpp` code, replace all dynamic memory
operations with smart pointers. The resulting file should be named
`max_min_sp_2d_matrix.cpp`. The maximum and minimum values should be printed by
reading the value from an smart pointer as well.

# Submission

Please group the all the files within a zip. In those assignments with text
questions, add then at the beginning of the file as C++ comments.

{% include jekyll/includes/submission.md filename="smart_pointers" %}

