#include<iostream>
using namespace std;
int main()
{

	unsigned short int mar1;
	unsigned short int mar2;
	unsigned short int mar3;

	cout << "please enter Mark1/Mark2/Mark3" << endl;
	cin >> mar1 >> mar2 >> mar3;
	float sum = mar1 + mar2 + mar3;
	double Avg = sum / 3;
	cout << Avg << endl;
	return 0;


}
