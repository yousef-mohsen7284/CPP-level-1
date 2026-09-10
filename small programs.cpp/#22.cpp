#include<iostream>
using namespace std;
int main()
{
	 short int a;
	 short int b;
	const float PI = 3.14 ;
	cout << "Please Enter the values of a,b " << endl;
	cin >> a >> b;
	double Area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
	cout << "Circle Area inscribed in an Isoceles Triangle =" << Area << "cm" << endl;
	return 0;


}