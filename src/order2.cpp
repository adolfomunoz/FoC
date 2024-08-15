#include <iostream>
using namespace std;
int main() {
	float xmin, xmax;
	cout << "Write two real numbers : ";
	cin >> xmin >> xmax;
	if (xmin > xmax) {
		float aux = xmax;
		xmax = xmin;
		xmin = aux;
	}   
	cout << "Ordered numbers: "<<xmin<<" "<<xmax<<endl;
	return 0;
}