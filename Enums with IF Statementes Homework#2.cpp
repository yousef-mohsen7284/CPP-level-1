#include<iostream>
using namespace std;

enum enColor{Red=1,Blue=2,Green=3,Yellow=4};

int main() {
	cout << "****************************************\n";
	cout << "Please Choose Color from the list:\n";
	cout << "1:Red\n";
	cout << "2:Blue\n";
	cout << "3:Green\n";
	cout << "4:Yellow\n";
	cout << "Your Choice?";

	int c;
	enColor color;
	cin >> c;
	color = (enColor)c;
	if (color == enColor::Red) {

		system("color 4F");
	}
	else if (color == enColor::Blue) {

		system("color 1F");
	}
	else if (color == enColor::Green) {
		system("color 2F");
	}
	else if (color == enColor::Yellow) {
		system("color 6F");
	}
	else {
		system("color 4F");
	}
	return 0;
}