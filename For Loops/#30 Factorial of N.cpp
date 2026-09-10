#include<iostream>
using namespace std;
int main() {

	int N;
	cout << "Please Enter the Value of N ?\n";
	cin >> N;

	int Factorial = 1;
	for (int i = N;i >= 1;i--) {

		Factorial = Factorial * i;
	}
	cout<<"Factorial of "<<N<<" is : "<<Factorial<<endl;
	return 0;
}