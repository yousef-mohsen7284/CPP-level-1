#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned short int Days;
	float Hours;
	float Minutes;
	float Seconds;

	cout << "Please enter Number of Days" << endl;
	cin >> Days;
	cout << "Please enter Number of Hours" << endl;
	cin >> Hours;
	cout << "Please enter Number of Minutes" << endl;
	cin >> Minutes;
	cout << "Please enter Number of Seconds" << endl;
	cin >> Seconds;

	double TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;



	cout << "Total Seconds = " << TotalSeconds << endl;

	cout << "Rounding Total Seconds = " <<round(TotalSeconds) << endl;

	return 0;


}