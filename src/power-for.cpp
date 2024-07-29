#include <iostream>
using namespace std;
int main() {
    int exponent;
    float base, power = 1;
    cout<<"Introduce base: ";
    cin>>base;
    cout<<"Introduce exponent: ";
    cin>>exponent;
    for (int i = 1;i<=exponent;++i) 
        power *= base;
    cout<<base<<" raised to ";
    cout<<exponent<<" is ";
    cout<<power<<endl;
} 