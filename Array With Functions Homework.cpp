#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void ReadGrades(float Grade[3]) {

	cout << "Please Enter Grade 1? \n";
	cin >> Grade[0];

	cout << "Please Enter Grade 2?\n";
	cin >> Grade[1];

	cout << "Please Enter Grade 3?\n";
	cin >> Grade[2];

}


float AvgGrades(float Grade[3]) {

	float AvgGrades = (Grade[0] + Grade[1] + Grade[2]) / 3;

	return AvgGrades;
}


void PrintGrades(float Grade[3]) {
	cout << "***********************************************\n";

	cout << "Grade 1 = " << Grade[0] << endl;

	cout << "Grade 2 = " << Grade[1] << endl;

	cout << "Grade 3 = " << Grade[2] << endl;

	cout << "*************************************************\n";
}



int main() {

	float Grade[3];

	ReadGrades(Grade);

	PrintGrades(Grade);

	cout << "Average of Grades = " << AvgGrades(Grade) << endl;

	return 0;
}