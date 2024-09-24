#pragma once
#include "brush.h"

class Color : public Brush {
    std::string _name;
    unsigned char _r, _g, _b;
public:
    Color(const std::string& name, unsigned char r, unsigned char g, unsigned char b);
    std::string name() const override;
    void edit(unsigned char& r, unsigned char& g, unsigned char& b) override;
}; 

