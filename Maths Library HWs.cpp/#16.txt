#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned short int a;
	cout << "Please enter the value of a" << endl;
	cin >> a;
	unsigned short int d;
	cout << "please enter the value of d" << endl;
	cin >> d;
	float Area = a * sqrt(pow(d, d) - pow(a, a));
	cout << "Area of rectangle = " << Area << endl;
	return 0;





}