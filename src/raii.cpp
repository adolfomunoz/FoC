void f() {
  int* ptr = new int; // is ptr always released
  g(ptr);

  if (*ptr > 1)
    return;
  delete ptr;
}
