#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void SecondsConverter()
{
	int TotalSeconds;
	cout << "Please enter Total Seconds\n";
	cin >> TotalSeconds;
	int secondsperday = 24 * 60 * 60;
	int secondsperhour = 60 * 60;
	int secondsperminute = 60;

	int Numberofdays = floor(TotalSeconds / secondsperday);
	int Remainder1 = TotalSeconds % secondsperday;
	int Numberofhours = floor(TotalSeconds / secondsperhour);
	int Remainder2 = Remainder1 % secondsperhour;
	int NumberofMinutes = floor(TotalSeconds / secondsperminute);
	int Remainder3 = Remainder2 % secondsperminute;
	int Numberofseconds = Remainder3;
	cout << Numberofdays << ":" << Numberofhours << ":" << NumberofMinutes << ":" << Numberofseconds << endl;
}

int main() {

	SecondsConverter();
	return 0;
}