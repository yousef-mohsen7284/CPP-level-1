#include<iostream>
using namespace std;

void ReadArrayData(int Arr1[100], int& Length) {

	cout << "How Many Numbers do you want to Enter? 1 to 100?\n";
	cin >> Length;

	for (int i = 0;i <= Length - 1;i++) {

		cout << "Please Enter Number " << i + 1 << endl;
		cin >> Arr1[i];
	}
}

void PrintArrayData(int Arr1[100], int Length) {

	for (int i = 0;i <= Length - 1;i++) {

		cout << "Number [" << i + 1 << "] :" <<Arr1[i] << endl;

	}


}

int CalculateArraySum(int Arr1[100], int Length) {

	int Sum = 0;

	for (int i = Sum;i <= Length - 1;i++) {

		Sum += Arr1[i];

	}
	return Sum;
}

/*at CalculateArrayAverage(int Arr1[100], int Length) {

	return (float)CalculateArraySum(Arr1, Length) / Length;
}
*/

int main() {

	int Arr1[100], Length = 0;

	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);
	int sum = CalculateArraySum(Arr1, Length);
	cout << "\n***********************************\n";
	cout << "Sum = " << sum << endl;
	cout << "Average = " << (float)sum / Length << endl;
	cout << "\n***********************************\n";

	return 0;
}
