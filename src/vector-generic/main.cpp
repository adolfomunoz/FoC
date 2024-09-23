#include "vector.h"
#include <iostream>
using namespace std;
int main() {
    Vector<int> vi(10);
    for (int i=0;i<10;++i)
        vi.set(i,i+1);
    cout<<"Total = "<<vi.add_all()<<endl;
    Vector<double> vd(10);
    for (int i=0;i<10;++i)
        vd.set(i,i+0.5);
    cout<<"Total = "<<vd.add_all()<<endl;
}