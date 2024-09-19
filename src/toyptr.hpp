#pragma once

template <typename T>
class ToyPtr {
  public:
    ToyPtr(T* ptr) : ptr_(ptr) { } // constructor
    ~ToyPtr() { delete ptr_; } // destructor
    T& operator*() { return *ptr_; } // * operator
    T* operator->() { return ptr_; } // -> operator
  private:
    T* ptr_; // the pointer itself
};
