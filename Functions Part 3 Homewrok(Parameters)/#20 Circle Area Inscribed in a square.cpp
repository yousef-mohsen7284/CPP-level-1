#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float CircleAreaInscribedinaSquare(float Lengthofsquare) {

	const float PI = 3.14;
	float Area;
	Area = (PI * pow(Lengthofsquare, 2)) / 4;
	return Area;
}

int main() {

	float Lengthofsquare;
	cout << "Please enter the value of square Length\n";
	cin >> Lengthofsquare;
	cout << "Area of Circle Inscribed in a Square = " << CircleAreaInscribedinaSquare(Lengthofsquare) << endl;
	return 0;
}
