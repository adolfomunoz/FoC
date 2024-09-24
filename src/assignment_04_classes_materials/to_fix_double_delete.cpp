int* create_int_ptr()
{
   int* ptr = new int;
   return ptr;
}

void delete_int_ptr(int* ptr)
{
   delete ptr;
}

int main() 
{
   int* int_ptr=create_int_ptr();
   delete_int_ptr(int_ptr);
   delete int_ptr;
}
