#include <iostream>

int global_a = 1; // global scope

int next(int a) {
  int local = a + 1; // local scope inside next
  int* local_ptr = new int; // what is the scope of this variable
  *local_ptr = local;
  return *local_ptr;
}

int main() {
  int a = global_a + 1; // local scope inside main
  a = next(a);
  std::cout << a << std::endl;
}
