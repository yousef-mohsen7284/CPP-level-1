#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void Swap(int &Num1, int &Num2) {

	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

	cout << "Numbers after are swapping are Num1 = " << Num1 << ", Num2 = " << Num2 << endl;
}



int main() {

	int Num1, Num2;
	cout << "Plese Enter the value of Num1\n";
	cin >> Num1;
	cout << "Please Enter the value of Num2\n";
	cin >> Num2;
	cout << "Numbers berfore swappping are Num1 = " << Num1 << ", Num2 = " << Num2 << endl;
	swap(Num1, Num2);
	cout << "Numbers after swapping are Num1 = " << Num1 << ", Num2 = " << Num2 << endl;

	return 0;

}