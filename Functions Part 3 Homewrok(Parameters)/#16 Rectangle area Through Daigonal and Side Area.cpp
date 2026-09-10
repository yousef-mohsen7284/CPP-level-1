#include<iostream>
#include<string>
#include<cmath>
using namespace std;

float RectangleAreaThroughDiagonal(float Length,float Diagonal){

	float Area;
	Area = Length * sqrt(pow(Diagonal, 2) - pow(Length, 2));
	return Area;
}


int main() {

	float Length, Diagonal;
	cout << "Please enter the value of Length \n";
	cin >> Length;
	cout << "Please enter the value of Daigonal\n";
	cin >> Diagonal;
	cout << "Area of Rectangle Through Diagona = " << RectangleAreaThroughDiagonal(Length, Diagonal) << endl;
	return 0;
}