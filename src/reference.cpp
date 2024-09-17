#include <iostream>
void successor(int& j) { j = j + 1; }

int main() {
  int i = 0;
  int& i_ref = i; // reference creation
		  
  i_ref = i_ref + 1;
  std::cout << i << std::endl;

  i = 5;
  std::cout << i << std::endl;

  succesor(i_ref);
  std::cout << i << std::endl;
}

