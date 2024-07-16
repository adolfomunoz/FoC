#include <iostream>
using namespace std;
int main() {
	float x, abs_x;
	cout << "Write a real number : ";
	cin >> x;
	if (x>0) 
		abs_x = x;
	else
		abs_x = -x;     
	cout << "Its absolute value is "<<abs_x<<endl;
	return 0;
}