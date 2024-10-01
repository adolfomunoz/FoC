#include <cassert>
#include <iostream>

int* allocate_many(size_t n)
{
	assert((n>0) && "Cannot allocate zero-length array");

	return new int[n];
}

void allocate_many_ref(int*& int_ptr_ref, size_t n)
{
	assert((n>0) && "Cannot allocate zero-length array");

	int_ptr_ref = new int[n];

	// consider exceptions as well
	// https://learn.microsoft.com/en-us/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-170
	assert((int_ptr_ref != nullptr) && "Returned invalid pointer");
}

int main()
{
  size_t n;
  std::cout << "Please type the number of elements: " << std::endl;
  std::cin >> n;

  allocate_many(n);


  int* int_ptr;
  allocate_many_ref(int_ptr, n);

  return 0;
}
