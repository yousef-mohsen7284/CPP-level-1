#include<iostream>
using namespace std;

enum enCountry{Egypt=1,Saudi=2,Sudan=3,Jordan=4,Lbiya=5,others=6};

int main() {

	cout << "************************************\n";
	cout << "Choose Your Country\n";
	cout << "1:Egypt\n";
	cout << "2:Saudi\n";
	cout << "3:Sudan\n";
	cout << "4:Jordan\n";
	cout << "5:Libya\n";
	cout << "6:others\n";
	cout << "Your Choice?\n";
	
	int c;
	enCountry Country;
	cin >> c;
	Country = (enCountry)c;
	if (Country == enCountry::Egypt) {
		cout << "Your Country is Egypt";
	}
	else if (Country == enCountry::Saudi) {
		cout << "Your Country is Saudi";
	}
	else if (Country == enCountry::Sudan) {
		cout << "Your Country is Sudan";
	}
	else if (Country == enCountry::Jordan) {
		cout << "Your Country is Jordan";
	}
	else if (Country == enCountry::Lbiya) {
		cout << "Your Country is Libya";
	}
	else if (Country == enCountry::others) {
		cout << "Your are from other country!";
	}
	else {
		cout << "Please Choose from the Listed Countries";
	}
	return 0;
}