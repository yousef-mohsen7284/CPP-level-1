#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int Num;
	int M;
	cout << "Please enter the value of Num " << endl;
	cin >> Num;
	cout << "Please enter the value of M" << endl;
	cin >> M;
	
	cout << "Value of Num^M = " << pow(Num, M) << endl;

	cout << "Rounding Value of Num^M = " << round(pow(Num, M)) << endl;


	return 0;



}