#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float CircleArea(float radius){

	const float PI = 3.14;
	float Area;
	Area = PI * pow(radius, 2);
	return Area;
}


int main() {

	float radius;
	cout << "Please enter the value of Radius \n";
	cin >> radius;
	cout << "Area of Circle = " << CircleArea(radius) << endl;
	return 0;
}