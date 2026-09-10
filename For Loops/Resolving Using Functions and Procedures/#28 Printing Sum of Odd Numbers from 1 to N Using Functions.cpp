#include<iostream>
using namespace std;


void ReadNumber(int& N) {

	cout << "Please Enter the Value of N:\n";
	cin >> N;
}



int SumOdd(int N) {

	int sum = 0;

	for (int i = 1;i <= N;i = i + 2) {

		sum = sum + i;
	}

	return sum;
}


int main() {

	int N;

	ReadNumber(N);
	cout << "Sum of odd Numbers from 1 to " << N << " = " << SumOdd(N) << endl;


	return 0;
}