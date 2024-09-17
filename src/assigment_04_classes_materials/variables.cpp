#include <iostream>

namespace { // anonymous namespace

const size_t n = 6;
unsigned int lynn_conway[n] = {3, 4, 7, 8, 12, 2};

bool is_even(unsigned int a) {
  unsigned int mask = 0x1;
  return (a & mask) == 0;
}

} // anonymous namespace

int main() {

  unsigned int *lynn_ptr=lynn_conway;

  for(size_t i = 0; i < n; ++i) {
    if(is_even(lynn_ptr[i])) {
      std::cout << *(lynn_ptr+i) << " is even." << std::endl;
    }
  }
}
