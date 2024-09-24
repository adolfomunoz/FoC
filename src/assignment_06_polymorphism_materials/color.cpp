#include "color.h"


Color::Color(const std::string& name, unsigned char r, unsigned char g, unsigned char b) :
        _name(name), _r(r), _g(g), _b(b) {}

std::string Color::name() const {
    return _name;
} 

void Color::edit(unsigned char& r, unsigned char& g, unsigned char& b) {
    r=_r; g=_g; b=_b;
} 
