#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "Please Enter The Value of N?\n";
	cin >> N;

	int i = 0;
	int sum = 0;

	while (i <= N) {

		sum = sum + i;

		i = i + 2;
	}

	cout << "Sum of Even Numbers from 1 to " << N << " = " << sum << endl;
	return 0;
}