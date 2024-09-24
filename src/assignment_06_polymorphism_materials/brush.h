#pragma once
#include <string>

class Brush {
public:
    virtual std::string name() const = 0;
    virtual void edit(unsigned char& r, unsigned char& g, unsigned char& b) = 0;
}; 