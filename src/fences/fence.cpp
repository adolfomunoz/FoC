#include "fence.h"
double fence_cost(const Shape& shape, 
        double type) {
    return shape.perimeter() * type;
} 
