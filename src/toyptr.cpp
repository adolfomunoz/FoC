#include "toyptr.hpp"

int main() {
  ToyPtr<int> x(new int(5));
  ToyPtr<int> y(x);
  return 0;
}
