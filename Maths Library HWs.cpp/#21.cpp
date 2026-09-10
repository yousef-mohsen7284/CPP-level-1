#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float PI = 3.14;
	unsigned short int L;
	cout << "Please enter the value of L" << endl;
	cin >> L;


	float Area = (pow(L,L)/(4*PI));

	cout << "Area of Cicle = " << Area << endl;

	cout << "Area of Circle After Flooring = " << floor(Area) << endl;

	return 0;

}