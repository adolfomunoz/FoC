#include <iostream>
using namespace std;
int main() {
	float x;
	cout << "Write a real number : ";
	cin >> x;
	float abs_x = x,
	if (x<0) abs_x = -x;    
	cout << "Its absolute value is "<<abs_x<<endl;
	return 0;
}