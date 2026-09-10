#include<iostream>

using namespace std;

void PINREADER(int &PIN) {

	cout << "Please Enter Your PIN?\n";
	cin >> PIN;

}

int main() {

	int PIN;
	float userbalance;
	userbalance = 7500;
	PINREADER(PIN);

	if (PIN == 1234) {


		cout << "Your Balance = " << userbalance << endl;
	}
	else {

		cout << "Wrong PIN!";
	}
	return 0;
}