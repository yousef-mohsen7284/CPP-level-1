#include<iostream>
using namespace std;
int main()
{

	short int Penny;
	short int Nickel;
	short int Dime;
	short int Quarter;
	short int Dollar;
	cout << "Please enter the values of Pennies,Nickels,Dimes,Quarters,Dollars" << endl;
	cin >> Penny >> Nickel >> Dime >> Quarter>>Dollar;
	short int TotalPennies = Penny * 1 + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    float TotalDollars = TotalPennies / 100;
	cout << "Total Pennies = " << TotalPennies << " Penny\n";
	cout << "Total Dollars = " << TotalDollars << " Dollar\n";
	return 0;
}