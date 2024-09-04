---
title: Subprograms
---

# Rectangular triangle

Develop a program that goes through a set of rectangular triangles such as this:

{% include img/triangle.svg %}

For each triangle, the user will introduce through the keybard the hypotenuse *h* and the side *c* and then output the angle *a* opposed to the side, in degrees. The program will end when the user introduces the data of an imposible rectangular triangle.

Assume that you don't have available the implementation of the inverse sine, so you need to approximate it through its series expansion

$$ \sin^{-1}(x) = \sum_{i=0}^{\infty}\frac{(2n)!}{4^n (n!)^2 (2n+1)}x^{2n+1} .$$           

Assume as well that you don't already have a function for calculating neither the factorial nor the power. We consider a sufficient approximation of the inver cosine the use of the ten first terms of the series expansion. 


## Submission 

The specification of all the functions you implement for solving the problem must be on a file named **`functions.h`** while their implementation must be on a file **`functions.cpp`**. The source code of the main program that solves the full proposed problem should be in a file named **`triangles.cpp`** that should compile with the commandline:

```
g++ triangles.cpp functions.cpp -o triangles
```

If you have (and you should) developed other test programs for your functions, include them as well.

{% include jekyll/includes/submission.md filename="triangles" %}