#include "gcf.h"
#include <iostream>
using namespace std;
int main() {
    int num, den;
    cout<<"Introduce numerator and denominator : ";
    cin>>num>>den;
    int m = gcf(num,den);
    num /= m;
    den /= m;
    cout<<"Simplified is: "<<num<<"/"<<den<<endl;
} 