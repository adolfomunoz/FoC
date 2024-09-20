#pragma once
class VectorInt {
private:
    int size;
    int* data;
public:
    VectorInt(int size);
    void set(int index, int value);
    int add_all() const;
    ~VectorInt(); 
};

