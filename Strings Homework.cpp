#include<iostream>
#include<string>

using namespace std;
int main()
{
	string String1;
	string String2;
	string String3;

	cout << "Please enter String 1 \n";
	getline(cin, String1);
	cout << String1 << endl;
	cout << "Please enter String 2 \n";
	cin >> String2;
	cout << String2 << endl;
	cout << "Please enter String 3 \n";
	cin >> String3;
	cout << String3 << endl;
	cout << "**********************************************\n";
	cout << "The length of String1 is :" << String1.length() << endl;
	cout << "Characters at 0,2,4,7 are: " << String1[0] << String1[2] << String1[4] << String1[7] << endl;
	string String4;
	String4 = String2 + String3;
	cout << "Concatenating String2 and String3 = " << String4 << endl;
	int Multiplication;
	Multiplication = stoi(String2) * stoi(String3);
	cout << "String2*String3= " << Multiplication << endl;
	return 0;

}