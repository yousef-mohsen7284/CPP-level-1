#include<iostream>

using namespace std;


void ReadMarks(float& Mark1, float& Mark2, float& Mark3) {

	cout << "Please Enter Mark 1?\n";
	cin >> Mark1;
	cout << "Please Enter Mark 2?\n";
	cin >> Mark2;
	cout << "Please Enter Mark 3?\n";
	cin >> Mark3;
}


float CalculatingAverage(float Mark1, float Mark2, float Mark3) {

	return (Mark1 + Mark2 + Mark3) / 3.0;
}


int main() {

	float Mark1, Mark2, Mark3;
	float AVG;
	ReadMarks(Mark1, Mark2, Mark3);
	AVG = CalculatingAverage(Mark1, Mark2, Mark3);
	cout << "Average of Entered Marks = " << AVG << endl;
	if (AVG >= 50) {

		cout << "PASS";
	}
	else {

		cout << "FAIL";
	}
	return 0;
}