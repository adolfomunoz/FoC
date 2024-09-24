#include "rectangle.h"

Rectangle::Rectangle(double w, double h) :
    width(w), height(h){}
double Rectangle::perimeter() const {
    return 2*width + 2*height;
}  