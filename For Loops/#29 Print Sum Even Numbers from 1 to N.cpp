#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "Please Enter the Value of N ?\n";
	cin >> N;
	int Sum = 0;
	for (int i = 0;i <= N;i = i + 2) {

		Sum = Sum + i;
	}

	cout << "Some of Even Numbers from 0 to " << N << " is : " << Sum << endl;

	return 0;

}
