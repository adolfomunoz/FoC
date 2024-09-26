int find_max(int* array, const size_t n)
  pre( (n > 0) && (array != nullptr));
  post(i == n);
{
  int my_max=array[0];

  size_t i;
  for(i=1; i < n;++i) {
    max=std::max(my_max, array[i]);
  }
}
