#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int PowerofM(int Number, int M) {

	int Power;
	Power = pow(Number, M);
	return Power;

}

int main() {

	int Number, M;
	cout << "Please enter the Number\n";
	cin >> Number;
	cout << "Please enter the value of M\n";
	cin >> M;
	cout << "Value of Power = " << PowerofM(Number, M);
	return 0;

}