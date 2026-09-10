#include<iostream>
#include<string>
#include<cmath>

using namespace std;

struct strInfo {

	string firstname;
	string lastname;
	int age;
	string phone;
};

void ReadInfo(strInfo& Persons) {
 
	cout << "Please Enter Your First Name?\n";
	cin >> Persons.firstname;
	cout << "Please Enter Your Last Name?\n";
	cin >> Persons.lastname;
	cout << "Please Enter Your Age?\n";
	cin >> Persons.age;
	cout << "Please Enter Your Phone Number?\n";
	cin >> Persons.phone;
}

void PrintInfo(strInfo Persons) {

	cout << "****************************************************\n";
	cout << "First Name: " << Persons.firstname << endl;
	cout << "Last Name: " << Persons.lastname << endl;
	cout << "Age: " << Persons.age << endl;
	cout << "Phone: " << Persons.phone << endl;
	cout << "****************************************************\n";

}

void ReadPersonsInfo(strInfo Persons[2]) {

	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);

}

void PrintPersonsInfo(strInfo Persons[2]) {

	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);

}



int main() {


	strInfo Persons[2];

	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);

	return 0;
}