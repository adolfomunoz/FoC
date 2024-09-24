#pragma once
#include "shape.h"
class Circle : public Shape {
  double radius;
public:
  Circle(double r);
  double perimeter() const override;
};


 

