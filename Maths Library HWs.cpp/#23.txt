#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	unsigned short int a, b, c;
	cout << "Please enter the value of a" << endl;
	cin >> a;
	cout << "Please enter the value of b" << endl;
	cin >> b;
	cout << "Please enter the value of c" << endl;
	cin >> c;

	const float PI = 3.14;

	int P = (a + b + c) / 2;

	double T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));

	double Area = PI * T;
	cout << "Area of Circle = " << Area << endl;
	cout << "Area after rounding answer = " << round(Area) << endl;
	return 0;
}