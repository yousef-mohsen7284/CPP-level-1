#include<iostream>
#include<cmath>
#include<string>

using namespace std;
float CircleAreaAlongCircumference(float Length) {
	const float PI = 3.14;
	float Area;
	Area = pow(Length, 2) / 4 * PI;
	return Area;
}


int main() {

	float Length;
	cout << "Please enter the value of Length\n";
	cin >> Length;
	cout << "Area of Circle along the Circumference= " << CircleAreaAlongCircumference(Length) << endl;
	return 0;
}