#include<iostream>
using namespace std;

void ReadNumber(int& N) {

	cout << "Please Enter the Value of N:\n";
	cin >> N;
}



int FactorialCalc(int N) {

	int Factorial = 1;

	for (int i = N;i >=1;i--) {

		Factorial = Factorial * i;
	}

	return Factorial;
}


int main() {

	int N;

	ReadNumber(N);
	cout << "Factorial of " << N << " = " << FactorialCalc(N) << endl;
	return 0;
}