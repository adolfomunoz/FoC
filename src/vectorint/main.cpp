#include "vectorint.h"
#include <iostream>
using namespace std;
int main() {
    VectorInt vi = create(10);
    for (int i=0;i<10;++i)
        set(vi,i,i+1);
    cout<<"Total = "<<add_all(vi)<<endl;
    free(vi);
}