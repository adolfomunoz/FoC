#include <iostream>
int max(int a, int b) {
    if (a>b) return a;
    else return b;
}
double max(double a, double b) {
    if (a>b) return a;
    else return b;
}
int main() {
    std::cout<<max(3,5)<<std::endl;
    std::cout<<max(5.8,3.1)<<std::endl;
    std::cout<<max(3,13.1)<<std::endl;
}