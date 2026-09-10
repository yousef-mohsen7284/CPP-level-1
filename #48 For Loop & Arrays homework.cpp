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

void ReadPersonsInfo(strInfo Persons[100],int &Numberofpersons) {
	cout << "How Many Persons?\n";
	cin >> Numberofpersons;

	for (int i = 0;i <= Numberofpersons - 1;i++) {

		cout << "Please Enter Person's " << i + 1 << "Info" << endl;

		ReadInfo(Persons[i]);
	}

}

void PrintPersonsInfo(strInfo Persons[100],int NumberofPersons) {

	for (int i = 0;i <= NumberofPersons - 1;i++) {
		cout << "Person's " << i + 1 << " Info:\n";
		PrintInfo(Persons[i]);
	}

}



int main() {


	strInfo Persons[100];
	int NumberofPersons;
	ReadPersonsInfo(Persons,NumberofPersons);
	PrintPersonsInfo(Persons,NumberofPersons);

	return 0;
}