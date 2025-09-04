#include <iostream>

int global_a = 1; // global scope, data section

int next(int a) {
  int local = a + 1; // local scope inside next, stack
  int* local_ptr = new int; // what is the scope of this variable, heap
  *local_ptr = local;
  return *local_ptr;
}

int main() {
  int a = global_a + 1; // local scope inside main, stack
  a = next(a);
  std::cout << a << std::endl;
}
