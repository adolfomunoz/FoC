#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>
// Use (void) to silence unused warnings.
// from https://en.cppreference.com/w/cpp/error/assert
#define assertm(exp, msg) assert(((void)msg, exp))
int main() {
  int* int_ptr = new int(3);
  assertm("nullptr pointer", (int_ptr != nullptr));
  delete int_ptr;
  int_ptr=nullptr;
  assert((int_ptr!=nullptr) && "nullptr pointer");
  assertm((1 + 1) == 2, "Addition incorrect");
  std::cout << "Addition correct" << std::endl;
  assert(((1 + 1) == 1) && "2º addition incorrect");
  return 0;
}
