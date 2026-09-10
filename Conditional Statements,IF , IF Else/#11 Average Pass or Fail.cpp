#include<iostream>

using namespace std;

int main() {

	float Mark[3], Average;

	cout << "Please Enter Mark 1?\n";
	cin >> Mark[0];
	cout << "Please Enter Mark 2?\n";
	cin >> Mark[1];
	cout << "Please Enter Mark3?\n";
	cin >> Mark[2];

	Average = (Mark[0] + Mark[1] + Mark[2]) / 3;

	cout << "Average of Entered Marks = " << Average << endl;

	if (Average >= 50) {

		cout << "PASS\n";
	}
	else {

		cout << "FAIL\n";

	}
	return 0;
}