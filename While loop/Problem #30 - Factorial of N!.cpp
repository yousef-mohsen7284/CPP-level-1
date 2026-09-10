#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "Please Enter the Value of N?\n";
	cin >> N;
	while (N < 0) {
		cout << "The Number You Entered is Negative,Please Enter Positive Number?\n";
		cin >> N;
	}

	int i;
	i = N;
	int Factorial = 1;
	while (i>=1){

		Factorial = Factorial * i;
		i--;
	}

	cout << "Factorial of " << N << " = " << Factorial << endl;

	return 0;
}