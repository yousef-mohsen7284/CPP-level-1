#include<iostream>
#include<string>
#include<cmath>

using namespace std;


float TaskDurationinSeconds(int Days, int Hours, int Minutes, int Seconds) {

	float TotalSeconds;
	TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;
	return TotalSeconds;

}

int main() {
	

	int Days, Hours, Minutes, Seconds;
	cout << "Please enter the Number of Days \n";
	cin >> Days;
	cout << "Please enter the Number of Hours \n";
	cin >> Hours;
	cout << "Please enter the Number of Minutes \n";
	cin >> Minutes;
	cout << "Please enter the Number of Seconds \n";
	cin >> Seconds;
	cout << "Total Seconds = " << TaskDurationinSeconds(Days, Hours, Minutes, Seconds)<<" Seconds" << endl;
	return 0;
}