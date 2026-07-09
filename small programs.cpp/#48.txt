#include<iostream>
using namespace std;
int main()
{
	unsigned short int loanamount;
	cin >> loanamount;
	unsigned short int howmanymonths;
	cin >> howmanymonths;
	unsigned short int monthlyinstallment = loanamount / howmanymonths;
	cout << "Monthly Installment = " << monthlyinstallment << endl;

	return 0;






}