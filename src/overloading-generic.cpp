#include <iostream>
template<typename T>
const T& max(const T& a, const T& b) {
    if (a>b) return a;
    else return b;
}
int main() {
    std::cout<<max(3,5)<<std::endl;
    std::cout<<max(5.8,3.1)<<std::endl;
    std::cout<<max<double>(3,13.1)<<std::endl;
}