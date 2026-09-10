#include<iostream>
using namespace std;

void ReadNumber(int& N) {

	cout << "Please Enter the Value of N:\n";
	cin >> N;
}

void PrintNumbers(int N) {

	for (int i = 1;i <= N;i++) {

		cout << i << endl;
	}
}

int main() {

	int N;
	ReadNumber(N);
	PrintNumbers(N);
	return 0;
}