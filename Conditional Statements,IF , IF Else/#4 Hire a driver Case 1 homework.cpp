#include<iostream>

using namespace std;

int main() {

	int age;
	bool driverlisence;

	cout << "Please Enter Your Age?\n";
	cin >> age;
	cout << "Do You Have a Driver Liscense?\n";
	cin >> driverlisence;

	if (age >= 21 && driverlisence == true) {


		cout << "You are Hired!\n";
	}
	else {


		cout << "You Are Rejected!\n";
	}

	return 0;
}