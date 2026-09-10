#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned short int a;
	unsigned short int b;
	cout << "Please enter the value of a" << endl;
	cin >> a;
	cout << "Please enter the value of b" << endl;
	cin >> b;
	const float PI = 3.14;

	float Area = (PI * pow(b, b) / 4) * ((2 * a - b) / (2 * a + b));

	cout << "Area of Circle = " << Area << endl;
	cout << "Area of Circle after flooring = " << floor(Area) << endl;
	return 0;

}