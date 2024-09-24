#include "circle.h"
#include <cmath>

Circle::Circle(double r) :
    radius(r) {}
double Circle::perimeter() const {
    return 2*M_PI*radius;
}  