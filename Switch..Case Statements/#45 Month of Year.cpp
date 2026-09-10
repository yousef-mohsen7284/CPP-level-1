#include<iostream>
using namespace std;

enum enMonths{January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12};


int main() {

	int Month;
	cout << "Please Enter the number of Month\n";
	cin >> Month;
	enMonths Months;
	Months = (enMonths)Month;

	switch (Month) {

	case enMonths::January:
		cout << "It's January !";
		break;
	case enMonths::February:
		cout << "It's February !";
		break;
	case enMonths::March:
		cout << "It's March !";
		break;
	case enMonths::April:
		cout << "It's April !";
		break;
	case enMonths::May:
		cout << "It's May !";
		break;
	case enMonths::June:
		cout << "It's June !";
		break;
	case enMonths::July:
		cout << "It's July !";
		break;
	case enMonths ::August:
		cout << "It's August !";
		break;
	case enMonths::September:
		cout << "It's September !";
		break;
	case enMonths::October:
		cout << "It's October !";
		break;
	case enMonths::November:
		cout << "It's November !";
		break;
	case enMonths::December:
		cout << "It's December !";
		break;

	default:
		cout << "Wrong Month ";
	}

	return 0;


}