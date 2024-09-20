#include "vectorint.h"
#include <iostream>
using namespace std;
int main() {
    VectorInt vi(10);
    for (int i=0;i<10;++i)
        vi.set(i,i+1);
    cout<<"Total = "<<vi.add_all()<<endl;
}