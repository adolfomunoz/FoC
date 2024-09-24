#include "grayscale.h"

std::string Grayscale::name() const {
    return "grayscale";
} 

void Grayscale::edit(unsigned char& r, unsigned char& g, unsigned char& b) {
    unsigned char gray = r/3 + g/3 + b/3;
    r=gray; g=gray; b=gray;
} 
