#include "vectorint.h"
VectorInt::VectorInt(int size) {
    this->size = size;
    this->data = new int[size]; 
} 

void VectorInt::set(int index, int value) {
    //We do not check bounds
    this->data[index]=value;
}
int VectorInt::add_all() const {
    int sol = 0;
    for (int i = 0;i < this->size;++i)
        sol+=this->data[i];
    return sol;
}
VectorInt::~VectorInt() {
    delete[] this->data;
}
