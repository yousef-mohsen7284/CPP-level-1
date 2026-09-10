#include<iostream>
using namespace std;

int main() {

	int Number;
	cout << "Please Enter The Value of Number?\n";
	cin >> Number;

	int sum = 0;
	while (Number > -99 || Number < -99) {

		sum = sum + Number;
		cin >> Number;
	}

	cout << "The Sum of Entered Numbers = " << sum << endl;

	return 0;
}