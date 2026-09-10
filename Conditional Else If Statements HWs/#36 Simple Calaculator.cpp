#include<iostream>
using namespace std;
int main() {
	int Num1, Num2;
	char operationType;
	cout << "Please Enter Number 1?\n";
	cin >> Num1;
	cout << "Please Enter Number 2?\n";
	cin >> Num2;
	cout << "Please Enter Operation Type?\n";
	cin >> operationType;

	if(operationType=='+') {
		
		cout << Num1 + Num2;
	}
	else if (operationType== '-') {
		cout << Num1 - Num2;
	}
	else if (operationType == '*') {

		cout << Num1 * Num2;
	}
	else if (operationType == '/') {

		cout << Num1 / Num2;
	}

	return 0;
}
