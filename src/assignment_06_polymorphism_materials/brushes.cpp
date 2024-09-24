#include "brushes.h"
#include "color.h"
#include "grayscale.h"

std::vector<std::unique_ptr<Brush>> brushes() {
    std::vector<std::unique_ptr<Brush>> bs;
    bs.push_back(std::make_unique<Color>("red",255,0,0));
    bs.push_back(std::make_unique<Color>("green",0,255,0));
    bs.push_back(std::make_unique<Color>("blue",0,0,255));
    bs.push_back(std::make_unique<Grayscale>());
    return bs;
} 
