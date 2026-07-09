#include<iostream>
using namespace std;
int main()
{

	float Diameter;
	const float PI = 3.14;
	cout << "Please enter the value of Diameter" << endl;
	cin >> Diameter;
	double Area;
	Area = (PI * Diameter * Diameter) / 4;
	cout << "The Area Of Circle =" << Area << " cm" << endl;


	return 0;


}