#include<iostream>
#include<string>
using namespace std;

void MySumProcedure()
{
	int Number1, Number2;
	cout << "Please enter Number 1 ?\n";
	cin >> Number1;
	cout << "Please enter Nunber 2 ?\n";
	cin >> Number2;
	int sum;
	sum = Number1 + Number2;
	cout << "********************************************\n";
	cout << sum << endl;
}

int MySumFunction()
{
	int Number1, Number2;
	cout << "Please enter Number 1 ?\n";
	cin >> Number1;
	cout << "Please enter Nunber 2 ?\n";
	cin >> Number2;
	int sum;
	sum = Number1 + Number2;
	cout << "********************************************\n";
	return sum;
}

int main() 
{

	MySumProcedure();

	cout << MySumFunction();

	return 0;
}