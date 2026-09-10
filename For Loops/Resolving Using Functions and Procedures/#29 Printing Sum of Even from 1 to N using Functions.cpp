#include<iostream>
using namespace std;

void ReadNumber(int &N) {

	cout << "Please Enter the Value of N:\n";
	cin >> N;
}

int SummingEvenNumbers(int N) {

	int Sum = 0;

	for (int i = 0;i <= N;i = i + 2) {

		Sum = Sum + i;
	}

	return Sum;
}


int main() {

	int N;

	ReadNumber(N);
	
	cout << "Sum of Even Numbers from 1 to " << N << " = " << SummingEvenNumbers(N) << endl;


	return 0;
}
