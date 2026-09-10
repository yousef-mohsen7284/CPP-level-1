#include<iostream>
#include<string>
#include<cmath>


using namespace std;


int main() {
	
	float Grades[3];

	cout << "Please Enter Grade 1? \n";
	cin >> Grades[0];

	cout << "Please Enter Grade 2? \n";
	cin >> Grades[1];

	cout << "Pleasen Enter Grade 3? \n";
	cin >> Grades[2];

	float AvgGrades = (Grades[0] + Grades[1] + Grades[2]) / 3;
	cout << "*****************************************\n";
	cout << "The average of Grades is " << AvgGrades << endl;


	return 0;

}