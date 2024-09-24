---
title: Memory Management and an Introduction to Pointers
---

# Prerequisites

In this laboratory, you are going to write several small programs covering the
basic aspects of pointers. Please use the same compiler and setup that in
previous laboratories. Please do not forget to use these `CXXFLAGS` when
compiling with `g++`: `-Wall -Wextra -pedantic -Werror`. These flags would help
you to write more solid code.

Do not hesitate to contact the faculty in case of doubts about the exercises.

# Identifying variables and pointers

Please write a program (named `global_local.cpp`) that has a global integer
variable storing the value 1, a local integer variable (of the main function)
storing the value 2. Also, the program should have two pointer to integer
variables pointing to the local and the global variables. Finally, the program
will print the values of the four variables with the following format:

```
global_var stores 1
local_var stores 2
global_ptr points to 0x<correct value>
local_prt points to 0x<correct value>
```

In which section each variable will be stored?

# Modifying variables with pointers and references

Please write a program (named `write_through_ptr_ref.cpp`) that: 1) reads an integer
number from the standard input using
[std::cin](https://en.cppreference.com/w/cpp/io/cin), 2) increments the value
by 2 with a [constant pointer](https://en.cppreference.com/w/cpp/language/pointer), 3)
prints he updated value in the screen, 4) substracts the value by 2 with a reference, and
5) prints the final value.

# Fix the code


## Double delete

Could you please fix the following program named `to_fix_double_delete.cpp`.
Please run the original program before writing the fix. 

```.cpp
{% include src/assigment_04_classes_materials/to_fix_double_delete.cpp %}
```

## Missing new

Could you please fix the following program named `to_fix_missing_new.cpp`.
Please run the original program before writing the fix. 

```.cpp
{% include src/assignment_04_classes_materials/to_fix_missing_new.cpp %}
```

# Avoid using pointers when possible

Please read the `variables.cpp` program and briefly describe what the program does, specially
in terms of pointer arithmetic.
 
```.cpp
{% include src/assignment_04_classes_materials/variables.cpp %}
```

Then, what would happen if n is changed to 7 in the loop. ¿Does the compiler
gives any error?

And, finally, could you remove the pointers and use a
[range-for](https://en.cppreference.com/w/cpp/language/range-for) loop. The final
file should be named `variables_wout_pointers.cpp`.

# Pointer arithmetic

Please write a program that finds the maximum and the minimum elements in a
four by four float 2D matrix. The first version, `max_min_global_2d_matrix.cpp`
of the program should store the matrix in the data section, and should access
the elements with a pointer to float. The second version,
`max_min_heap_2d_matrix.cpp`,  should read two integer numbers from the command
line and create a matrix in the heap with those dimensions, always less than 5
rows and columns. To fill the matrix, use the [C++ standard library
pseudo-random number
generators](https://en.cppreference.com/w/cpp/numeric/random) ; e.g.:

```
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<float> dis {0.0f, 1.0f};

auto pseudo_random_float_value = dis(gen);
```

The output of both programs should be:

```
The maximum and minimun values of the matrix are: XXX and YYY 
```

_Notes: Could you ask yourself how the memory stores the matrix? Do you need to 
delete the matrix in any case?_

# Submission

Please group the all the files within a zip. In those assignments with text
questions, add then at the beginning of the file as C++ comments.

{% include jekyll/includes/submission.md filename="memory_management" %}

