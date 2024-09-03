#include "repeat.h"
int main(int argc, char** argv) {
    int n = 5;
    if (argc > 1) n = atoi(argv[1]);
    for (int i = 1; i<=n;++i) {
        repeat(n-i,' ');
        repeat(2*i - 1,'*');
        std::cout<<std::endl;
    } 
} 