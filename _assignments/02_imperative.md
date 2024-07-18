---
title: Imperative programming
---

# Calculator

Program a calculator that adds, substracts, multiplies and divides two real numbers. The user will introduce a binary mathematical expression (such as `3.5 + 2.2`) and the program will calculate the result and show it on screen (e.g. `4.7`).

The program will interactivelly ask for expressions until one expression has two zero operands. In the case of a division by zero, the program will output an error and keep asking for expressions.

Execution example:
```
> 3.5 + 2.2
4.7
> 2 x 4
8
> 5.5 / 0
Error: division by zero
> 0 - 0
End
```

Experiment with different executions, try to break it by entering non-standard calculator expressions, and see what happens with the output. You will realize that it is actually very easy to break if you do not follow the standard format *number operator number*.  At this moment this is something that you do not need to solve.

## Submission 

The source code that solves the proposed problem should be in a file named **`calculator.cpp`** that should compile with the commandline:

```
g++ calculator.cpp -o calculator
```

{% include jekyll/includes/submission.md filename=calculator %}