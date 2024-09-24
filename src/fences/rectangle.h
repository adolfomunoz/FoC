#pragma once
#include "shape.h"
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h);
    double perimeter() const override;
}; 

