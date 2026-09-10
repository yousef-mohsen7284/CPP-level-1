#include<iostream>
using namespace std;
int main() {

	float totalsales;
	cout << "Please Enter The Value of Total Sales ?\n";
	cin >> totalsales;

	if (totalsales > 1000000) {
		cout << "Total Percentage = " << totalsales * 0.01;
	}
	else if (totalsales >= 500000 && totalsales <= 1000000) {

		cout << "Total Percentage = " << totalsales * 0.02;
	}
	else if (totalsales >= 100000 && totalsales < 500000) {
		cout << "Total Percentage = " << totalsales * 0.03;
	}
	else if (totalsales >= 50000 && totalsales < 100000) {
		cout << "Total Percentage = " << totalsales * 0.05;
	}
	else {
		cout << "Total Percentage = " << totalsales * 0.00;
	}
	return 0;
}