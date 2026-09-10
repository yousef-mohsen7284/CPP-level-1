#include<iostream>
using namespace std;

int ReadAgeRange(int From, int To) {

	int age;
	do {

		cout << "Please Enter age between " << From << " and " << To << endl;
		cin >>age;
	}
	while (age<From || age>To);

	return age;
}


int main() {


	int age = ReadAgeRange(18, 45);
	cout << "Your Age is " << age << endl;

	return 0;
}