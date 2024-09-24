#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "fence.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
Shape* make_shape_from_commandline(int argc, char** argv) {
    string shape = "rectangle";
    double radius = 1.0, width = 1.0, height = 1.0;
    for (int i = 1; i<(argc-1); ++i) {
        if (string(argv[i])=="-shape") shape = argv[++i];
        else if (string(argv[i])=="-radius") radius = atof(argv[++i]);
        else if (string(argv[i])=="-width") width = atof(argv[++i]);
        else if (string(argv[i])=="-height") height = atof(argv[++i]); 
    }
    if (shape == "rectangle") 
        return new Rectangle(width,height);
    else
        return new Circle(radius); 
}

int main(int argc, char** argv) {
    Shape* shape = make_shape_from_commandline(argc,argv);
    cout<<"Fence cost:\n";
    cout<<"   "<<fence_cost(*shape,wood)<<" if made of wood\n";
    cout<<"   "<<fence_cost(*shape,iron)<<" if made of iron\n";
} 







