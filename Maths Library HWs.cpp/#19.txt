#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float PI = 3.14;

	unsigned short int D;
	cout << "Please enter the value of D" << endl;
	cin >> D;

	float Area = (PI * pow(D, D) / 4);
	cout << "Area of Circle = " << Area << endl;

	cout << "After using ceiling = " << ceil(Area) << endl;

	return 0;
}