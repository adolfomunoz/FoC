#include <iostream>

int* create_two_array()
{
   int* ptr = new int[2];
   return ptr;
}

void delete_two_array(int* ptr)
{
   delete ptr;
}

int main() 
{
   int* array=create_two_array();

   array[0] = 6;
   array[1] = 7;

   std::cout << "array[0]: " << array[0] << std::endl;
   
   delete_two_array(array);
   array=reinterpret_cast<int*>(0xDEADBEEF); // Is 0xDEADBEEF a valid address?
   
   std::cout << "array[1]: " << array[1] << std::endl;
}
