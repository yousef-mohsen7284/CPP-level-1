#include<iostream>
using namespace std;
int main() {

	int Number, M;
	cout << "Please Enter the Value of Number:\n";
	cin >> Number;
	cout << "Please Enter the Value of M:\n";
	cin >> M;

	int Power = 1;

	for (int i = 1;i <= M;i++) {

		Power = Power * Number;
	}

	cout << Number << " Power " << M << " = " << Power;

	return 0;

}