#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	short int Num;
	cout << "Please enter the value of Num" << endl;
	cin >> Num;

	cout << "Number^2= " << pow(Num, Num) << endl;
	cout << "Number^3= " << pow(Num, Num)*Num << endl;
	cout << "Number^4= " << pow(Num, Num)*Num*Num << endl;

	cout << "Rounding Number^2= " << round(pow(Num, Num)) << endl;
	cout << "Rounding Number^3= " << round(pow(Num, Num) * Num) << endl;
	cout << "Rounding Number^4= " << round(pow(Num, Num) * Num * Num) << endl;

	return 0;



}