#include<iostream>

using namespace std;


int main() {

	float UserBalance;
	UserBalance = 7500;
	int PinCode;
	cout << "Please Enter ATM Pin Code?\n";
	cin >> PinCode;

	if (PinCode == 1412) {

		cout << "Your Balance is: " << UserBalance << endl;

	}
	else {


		cout << "Wrong PIN" << endl;

	}

	return 0;
}