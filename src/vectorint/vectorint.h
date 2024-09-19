#pragma once
struct VectorInt {
    int size;
    int* data;
};
VectorInt create(int size);
void set(VectorInt& vi, int index, int value);
int add_all(const VectorInt& vi);
void free(VectorInt& vi);
