/* Modified from The developer's guide to debugging */
#include <cassert>
#include <iostream>

int
usage(int argc, const char* argv[]) {
  //read the number of steps from the command line
  if (argc != 2) {
    std::cerr << "Invalid syntax: leak_factorial <int_value>" << std::endl;
    exit(1);
  }

  int n = std::stoi(argv[1]);
  return n;
}

int
leak_factorial(int n)
{
    int* result {nullptr};

    assert(n >= 0);

    result = new int(1);

    if(n == 0) {
      return *result;
    }

    int* next_val = new int(leak_factorial(n-1) * n);

    return *result + *next_val;
 }

int main(int argc, const char **argv)
{

  auto n = usage(argc, argv);

  auto result = leak_factorial(n);
  std::cout << "Factorial of " << n << " equals " << result << std::endl;

  return 0;
}

