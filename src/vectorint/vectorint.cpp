#include "vectorint.h"
VectorInt create(int size) {
    VectorInt vi;
    vi.size = size;
    vi.data = new int[size];
    return vi;
}
void set(VectorInt& vi, int index, int value) {
    //We do not check bounds
    vi.data[index]=value;
}
int add_all(const VectorInt& vi) {
    int sol = 0;
    for (int i = 0;i < vi.size;++i)
        sol+=vi.data[i];
    return sol;
}
void free(VectorInt& vi) {
    delete[] vi.data;
}
