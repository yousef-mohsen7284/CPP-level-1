#include<iostream>
using namespace std;

enum enWeekdays{Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};

int main() {

	int Day;
	cout << "Please Enter Day Number?\n";
	cin >> Day;

	enWeekdays Weekdays;
	Weekdays = (enWeekdays)Day;

	switch (Day) {

	case enWeekdays::Sunday:
		cout << "Sunday";
		break;

	case enWeekdays::Monday:
		cout << "Monday";
		break;
		
	case enWeekdays::Tuesday:
		cout << "Tuesday";
		break;

	case enWeekdays::Wednesday:
		cout << "Wednesday";
		break;

	case enWeekdays::Thursday:
		cout << "Thursday";
		break;

	case enWeekdays::Friday:
		cout << "Friday";
		break;

	case enWeekdays::Saturday:
		cout << "Saturday";
		break;

	default:
		cout << "Wrong Day!";
	}
	return 0;
}
