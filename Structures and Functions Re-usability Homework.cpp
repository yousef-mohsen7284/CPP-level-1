#include<iostream>
#include<string>
#include<cmath>

using namespace std;

struct strPersonInfo
{
	string Name;
	int Age;
	string City;
	string Country;
	int Monthlysalary;
	char Gender;
	bool Married;
};

void ReadPersonInfo(strPersonInfo &Info) {

	cout << "Please enter Your Name \n";
	cin >> Info.Name;
	cout << "Please enter Your age\n";
	cin >> Info.Age;
	cout << "Please enter Your City\n";
	cin >> Info.City;
	cout << "Please enter Your Country\n";
	cin >> Info.Country;
	cout << "Please enter Your Monthly Salary\n";
	cin >> Info.Monthlysalary;
	cout << "Please enter Your Gender\n";
	cin >> Info.Gender;
	cout << "Are You Married?\n";
	cin >> Info.Married;
}

void PrintPersonalInfo(strPersonInfo Info) {
	cout << "*********************************************\n";
	cout << "Name: " << Info.Name << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "City: " << Info.City << endl;
	cout << "Country: " << Info.Country << endl;
	cout << "Monthly Salary: " << Info.Monthlysalary << endl;
	cout << "Yearly Salary: " << Info.Monthlysalary*12 << endl;
	cout << "Gender: " << Info.Gender << endl;
	cout << "Married?: " << Info.Married << endl;
	cout << "*********************************************\n";

}


int main() {

	strPersonInfo Person1;
	ReadPersonInfo(Person1);
	PrintPersonalInfo(Person1);

	strPersonInfo Person2;
	ReadPersonInfo(Person2);
	PrintPersonalInfo(Person2);

	return 0;

}
