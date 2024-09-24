#include "CImg.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include "brushes.h"

using namespace cimg_library;
using namespace std;

void apply(CImg<unsigned char>& img, int x, int y, float radius, Brush& brush) {
  int dr = int(radius)+1;
  for (int i = x-dr; i<=x+dr; ++i)
    for (int j = y-dr; j<=y+dr; ++j) {
      if ( (i>=0) &&( j>=0) && (i<img.width()) && (j<img.height()) &&
          ((double((i-x)*(i-x)+(j-y)*(j-y))<((radius-0.5)*(radius-0.5)))) ) {
            brush.edit(img(i,j,0,0),img(i,j,0,1),img(i,j,0,2));
      } 
    } 
}

void apply_all(CImg<unsigned char>& img, Brush& brush) {
  for (int i = 0; i<= img.width(); ++i)
    for (int j = 0; j<= img.height(); ++j) {
        brush.edit(img(i,j,0,0),img(i,j,0,1),img(i,j,0,2));
      } 
     
} 

int main(int argc, char** argv) {
  std::string input = "";
  float radius = 3.0f;
  int size = 512;

  for (int i = 0; i<(argc-1); ++i) {
    if (string(argv[i])=="-input") input = argv[++i];
    else if (string(argv[i])=="-radius") radius = atof(argv[++i]);
    else if (string(argv[i])=="-size") size = atoi(argv[++i]);
  } 

  if (size < 0) size = 512;

  int xo = -1, yo = -1, x = -1, y = -1;
  bool redraw = true; bool update_title = false;

  std::vector<std::unique_ptr<Brush>> bs = brushes();
  int ib = 0;

  CImg<unsigned char> img(size,size,1,3);
  if (!input.empty()) img.load(input.c_str());
  CImgDisplay disp(img,(std::string("MiniGimp - ")+(bs[ib]->name())).c_str());
  while (!disp.is_closed() && !disp.is_keyQ() && !disp.is_keyESC()) {
    const unsigned int but = disp.button();
    redraw = false; update_title = false; 
    if (disp.is_keyARROWLEFT()) {  --ib; if (ib<0) ib = bs.size()-1; update_title = true; } 
    else if (disp.is_keyARROWRIGHT()) { ++ib; if (ib>=int(bs.size())) ib=0; update_title = true; }  
    else {
      xo = x; yo = y; x = disp.mouse_x(); y = disp.mouse_y();
      if (xo>=0 && yo>=0 && x>=0 && y>=0) {
        if (but&1 || but&2) {
          const float tmax = (float)std::max(cimg::abs(xo - x),cimg::abs(yo - y)) + 0.1f;
          for (float t = 0; t<=tmax; ++t)
            apply(img,(int)(x + t*(xo - x)/tmax),(int)(y + t*(yo - y)/tmax),((but&2)?2:1)*radius,*bs[ib]); 
          redraw = true;
        } else if (but&4) { apply_all(img,*bs[ib]); redraw = true; }
      }   
    } 
    if (update_title) disp.set_title((std::string("MiniGimp - ")+(bs[ib]->name())).c_str());
    if (redraw) disp.display(img);
    disp.resize(disp).wait();
  }
  return 0;

} 
