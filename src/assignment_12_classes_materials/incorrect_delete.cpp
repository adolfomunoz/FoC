#include <iostream>

int
usage(int argc, char const* argv[]) {
      //read the number of steps from the command line
  if (argc != 2) {
    std::cerr << "Invalid syntax: incorrect_delete <int_value>" << std::endl;
    exit(1);
  }

  int n = std::stoi(argv[1]);
  return n;
}

int main(int argc, char const* argv[])
{

  auto n = usage(argc, argv);

  int* int_ptr = new int(n);

  std::cout << "Current value: " << *int_ptr << std::endl;

  delete int_ptr;

  int_ptr+=4;

  delete int_ptr;
}
