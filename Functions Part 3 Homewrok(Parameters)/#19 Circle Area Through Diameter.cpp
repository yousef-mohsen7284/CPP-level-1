#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float CircleAreaThroughDiameter(float Diameter) {

	const float PI = 3.14;
	float Area;
	Area = (PI * pow(Diameter, 2)) / 4;
	return Area;
}


int main() {

	float Diameter;
	cout << "Please enter the Value of Diameter \n";
	cin >> Diameter;
	cout << "Area of Circle Through Diameter = " << CircleAreaThroughDiameter(Diameter) << endl;
	return 0;

}