#include<iostream>
using namespace std;

int main() {

	int Number, M;
	cout << "Please Enter The Value of Number?\n";
	cin >> Number;
	cout << "Please Enter The Value of M?\n";
	cin >> M;
	
	int i = 1;
	int Power;
	Power = 1;
	while (i <= M) {

		Power = Power * Number;
		i++;
	}

	cout << Number << " ^ " << M << " = " << Power << endl;

	return 0;

}