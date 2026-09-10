#include<iostream>
using namespace std;

enum enWeekday{ Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};


void WeekdayMenu() {

	cout << "************************************\n";
	cout << "            Weekday List             \n";
	cout << "1: Sunday\n";
	cout << "2: Monday\n";
	cout << "3: Tuesday\n";
	cout << "4: Wednesday\n";
	cout << "5: Thursday\n";
	cout << "6: Friday\n";
	cout << "7: Saturday\n";
	cout << "************************************\n";
	cout << "Please enter the number of day?\n";
}


enWeekday ReadWeekday() {

	enWeekday Weekday;
	int wd;
	cin >> wd;
	return (enWeekday)wd;

}


string GetWeekday(enWeekday Weekday) {

	switch (Weekday) {
	case enWeekday::Sun: return "Sunday"; break;
	case enWeekday::Mon: return "Monday"; break;
	case enWeekday::Tue: return "Tuesday"; break;
	case enWeekday::Wed: return "Wednesday"; break;
	case enWeekday::Thu: return "Thursday"; break;
	case enWeekday::Fri: return "Friday"; break;
	case enWeekday::Sat: return "Saturday"; break;
	default:
		return "Invalid Weekday\n";
	}
}

int main() {

	WeekdayMenu();

	cout << "today is " << GetWeekday(ReadWeekday()) << endl;

	return 0;
}