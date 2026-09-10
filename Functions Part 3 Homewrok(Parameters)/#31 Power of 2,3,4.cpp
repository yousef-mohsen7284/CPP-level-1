#include<iostream>
#include<string>
#include<cmath>

using namespace std;
void PowersofNumber() {

	int Number, a, b, c;
	cout << "Please enter the Number\n";
	cin >> Number;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << "Number power 2 = " << a << endl;
	cout << "Number power 3 = " << b << endl;
	cout << "Number power 4 = " << c << endl;

}


int main() {
	PowersofNumber();
	return 0;
}