#include<iostream>
using namespace std;
int main()
{
	 unsigned short int loanamount;
	 cin >> loanamount;
	 unsigned short int monthlyinstallment;
	 cin >> monthlyinstallment;
	 unsigned short int totalmonths = loanamount / monthlyinstallment;
	 cout << "Total Months = " << totalmonths << " Months" << endl;


	 return 0;





}