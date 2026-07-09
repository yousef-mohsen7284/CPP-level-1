#include<iostream>
using namespace std;
int main()
{
	short int Num1;
	short int Num2;
	cin >> Num1;
	cin >> Num2;
	cout << Num1 << Num2;

	short int Temp = Num1;
	short int Num1 = Num2;
	short int Num2 = Temp;


	cout << Num1 << Num2;

	return 0;







}
