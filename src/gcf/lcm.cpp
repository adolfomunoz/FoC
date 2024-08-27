#include "gcf.h"
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Introduce two integers : ";
    cin>>a>>b;
    int lcm = (a*b)/gcf(a,b);
    cout<<"Their least common multiple is: "<<lcm<<endl;
} 