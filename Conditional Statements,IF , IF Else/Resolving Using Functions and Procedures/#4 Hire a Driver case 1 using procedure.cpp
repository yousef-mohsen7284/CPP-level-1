#include<iostream>

using namespace std;

void Hireadriver(int &age,bool &driverlicesne) {

	cout << "Please Enter Your Age?\n";
	cin >> age;
	cout << "Do You Have a Driving License?\n";
	cin >> driverlicesne;
}


int main() {
	int age;
	bool driverlicense;
	Hireadriver(age, driverlicense);

	if (age >= 21 && driverlicense == true) {

		cout << "Hired!\n";
	}
	else {
		cout << "Rejected!\n";
	}
	return 0;
}