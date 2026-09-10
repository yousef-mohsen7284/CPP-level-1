#include<iostream>
using namespace std;

int main() {


	int sum = 0;
	int Number = 0;

	for (int i = 1;i <= 5;i++)
	{
		cout << "Enter Number: ";
		cin >> Number;

		if (Number > 50)
		{
			cout << "The Number You Entered is Greater than 50 and won't be calculated" << endl;
			continue;
		}

		sum += Number;
	}

	cout << "Sum = " << sum << endl;
	return 0;
}