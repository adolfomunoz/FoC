#include <iostream>

/**
 * The function repeat outputs the 
 * same charater a number of times.
 * 
 * n represents the number of times
 * c is the character that is repeated
 * The function returns nothing
 */
void repeat(int n, char c) {
    for (int i = 0;i<n;++i)
        std::cout<<c;
} 

int main(int argc, char** argv) {
    int n = 5;
    if (argc > 1) n = atoi(argv[1]);
    for (int i = 1; i<=n;++i) {
        repeat(n-i,' ');
        repeat(2*i - 1,'*');
        std::cout<<std::endl;
    } 
} 