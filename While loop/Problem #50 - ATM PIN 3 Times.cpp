#include<iostream>
using namespace std;

int main() {

	int PIN, i = 0;
	int UserBalance = 7500;

	cout << "Please Enter Your PIN:\n";
	cin >> PIN;

	while (PIN != 1234 && i < 3) {

		cout << "Wrong PIN,Please Try Again:\n";
		cin >> PIN;
		i++;
	}

	if (PIN == 1234) {

		cout << "Your Balance is " << UserBalance << endl;
	}
	else {

		cout << "Your Card Is Locked!\n";
	}

	return 0;
}