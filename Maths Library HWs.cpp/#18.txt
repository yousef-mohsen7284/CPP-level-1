#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float PI = 3.14;

	unsigned short int r;
	cout << "Please enter the value of r" << endl;
	cin >> r;

	float Area = PI * pow(r, r);
	cout << "Area of Circle = " << Area << endl;

	cout << "After using ceiling = " << ceil(Area) << endl;

	return 0;
}