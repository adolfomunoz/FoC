#include <iostream>
using namespace std;
int main() {
    int number, n, digits;
    cout<<"Introduce integer: ";
    cin>>number;
    n = number; digits = 0;
    while (n>0) {
        n = n / 10;
        ++digits;
    }
    cout<<number<<" has "<<digits<<" digits"<<endl; 
} 