#include <iostream>

unsigned int factorial(unsigned int n)
{
  if(n == 0) {
    return 1;
  }

  return factorial(n-1) * n;
}

int main()
{
    std::cout << "Type the n value for computing factorial: ";

    unsigned int n{};
    std::cin >> n;

    auto result = factorial(n);
    std::cout << "factorial(" << n << ") = " << result << std::endl;

    return 0;
}

