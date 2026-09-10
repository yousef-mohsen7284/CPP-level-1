#include<iostream>
using namespace std;
int main() {

	int N;
	cout<< "Please enter the value of N ?\n";
	cin >> N;
	int sum = 0;

	for (int i = 1;i <= N;i = i + 2) {

		sum = sum + i;
	}

	cout << sum << endl;


	return 0;
}