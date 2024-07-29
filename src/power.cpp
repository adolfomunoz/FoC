#include <iostream>
using namespace std;
int main() {
    int exponent, i;
    float base, power;
    cout<<"Introduce base: ";
    cin>>base;
    cout<<"Introduce exponent: ";
    cin>>exponent;
    power = 1; i = 1;
    while (i<=exponent) {
        power *= base;
        ++i;
    }
    cout<<base<<" raised to ";
    cout<<exponent<<" is ";
    cout<<power<<endl; 
} 