#include<iostream>

using namespace std;


void AgeReader(int& age) {

	cout << "Please Enter Your Age?\n";
	cin >> age;
}


int main() {

	int age;
	AgeReader(age);

	if (age >= 18 && age <= 45) {

		cout << "Valid Age";

	}
	else {


		cout << "Invalid Age";
	}
	return 0;
}