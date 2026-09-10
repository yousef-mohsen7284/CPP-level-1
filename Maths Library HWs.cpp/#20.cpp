#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float PI = 3.14;

	unsigned short int A;
	cout << "Please enter the value of A" << endl;
	cin >> A;

	float Area = (PI * pow(A, A)) / 4;
	cout << "Area of Circle = " << Area << endl;

	cout << "After using ceiling = " << ceil(Area) << endl;

	return 0;
}