#include "swap.h"
#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Write three real numbers : ";
    cin>>a>>b>>c;
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>b) swap(a,b);
    cout<<"Numbers in order : ";
    cout<<a<<" "<<b<<" "<<c<<endl;
} 
