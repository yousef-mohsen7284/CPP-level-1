#include<iostream>
using namespace std;
int main()
{

	 short int L;
	const float PI = 3.14;
	cout << "Please enter the value of L" << endl;
	cin>> L;
	double Area;
	Area = (L * L) / (4 * PI);
	cout << "The Area of Circle Along the Circumference = " << Area << " cm" << endl;

	return 0;


}