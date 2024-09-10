#include <iostream>

void swap(int *a, int *b) {
  int x = *a;
  *a = *b;
  *b = x;
}

int main() {
  int a = 1;
  int *b = nullptr;
  swap(&a, b);
  std::cout << "a: " << a << ", b: " << b << std::endl;
}
