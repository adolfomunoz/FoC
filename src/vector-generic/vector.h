#pragma once
template<typename T>
class Vector {
private:
    int size;
    T* data;
public:
    Vector(int size) {
        this->size = size;
        this->data = new T[size]; 
    }
    void set(int index, const T& value) {
        //We do not check bounds
        this->data[index]=value;
    }
    T add_all() const {
        T sol(0);
        for (int i = 0;i < this->size;++i)
            sol+=this->data[i];
        return sol;
    }
    ~VectorInt() {
        delete[] this->data;        
    }
};

