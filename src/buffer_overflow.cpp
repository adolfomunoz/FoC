#include <iostream>

int main() {
  int a[4] = {1, 2, 3, 4};

  for(size_t i = 0; i < 32; ++i) {
    std::cout << a[i] << std::endl;
  }
}
