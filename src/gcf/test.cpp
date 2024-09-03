#include "gcf.h"
#include <iostream>
using namespace std;
void test_gcf(int a, int b, int expected) {
    if (gcf(a,b) != expected) { 
        cout<<"Error: gcf("<<a<<","<<b<<") = "<<gcf(a,b);
        cout<<"     Expected "<<expected<<endl;
    } 
} 
int main() {
    for (int i=1; i<20; ++i) test_gcf(i,i,i);
    for (int i=2; i<20; ++i)
        for (int j=2;j<20;++j) test_gcf(i,j*i,i);
    test_gcf(6,8,2);
    test_gcf(6,9,3);
} 