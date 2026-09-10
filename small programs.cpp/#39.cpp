#include<iostream>
using namespace std;
int main()
{
	 unsigned short int  totalBill;
	 unsigned short int cashPaid;
	cin >> totalBill;
	cin >> cashPaid;
	unsigned short remainder = cashPaid - totalBill;
	cout << "Remainder = " << remainder << endl;
	return 0;


}