#include<iostream>
using namespace std;
int main()
{

	unsigned short int A;
	const float PI = 3.14;
	cout << "Pleas enter the value of A" << endl;
	cin >> A;
	double Area;
	Area = (PI * (A * A)) / 4;
	cout << "Area of inscribed circlie inside Square =" << Area << " cm" << endl;

	return 0;



}