#include "listint.h"
#include <iostream>
using namespace std;
int main() {
    ListInt li = create();
    for (int i=0;i<10;++i)
        push(li,i+1);
    cout<<"Total = "<<add_all(li)<<endl;
    free(li);
}