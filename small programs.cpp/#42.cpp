#include<iostream>
using namespace std;
int main()
{
	 short int day;
	 short int hour;
     short int minute;
     short int second;
	 cin >> day >> hour >> minute >> second;
	 int totalseconds = (day * 24 * 60 * 60) + (hour * 60 * 60) + (minute * 60) + (second);
	 cout << "Total Seconds =" << totalseconds << endl;
	 return 0;



}