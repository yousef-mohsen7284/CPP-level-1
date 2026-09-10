#include<iostream>
using namespace std;

enum enOperationTypes { Adding = '+', Subtracting = '-', Multiplying = '*', Deviding = '/' };

int main() {

	int Num1, Num2;
	char operationsymbol;
	cout << "Please Enter the Value of Number 1?\n";
	cin >> Num1;
	cout << "Please Enter the Value of Number 2?\n";
	cin >> Num2;
	cout << "Please Enter the Operation Symbol\n";
	cin >> operationsymbol;

	enOperationTypes operationtype;
	operationtype = (enOperationTypes)operationsymbol;

	switch (operationsymbol) {

	case enOperationTypes::Adding:
		cout << Num1 + Num2;
		break;
    
	case enOperationTypes::Subtracting:
		cout << Num1 - Num2;
		break;
		
	case enOperationTypes::Multiplying:
		cout << Num1 * Num2;
		break;
		
	case enOperationTypes::Deviding:
		Num1 / Num2;
	    break;

	default:
			cout << "Choose Right Operation!\n";
	}

	return 0;

}