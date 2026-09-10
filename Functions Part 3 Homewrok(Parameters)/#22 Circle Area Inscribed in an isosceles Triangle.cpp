#include<iostream>
#include<cmath>
#include<string>

using namespace std;
float CircleAreaInscribedinanisoscelesTriangle(float Length, float Base) {

	const float PI = 3.14;
	float Area;
	Area = PI * (pow(Base, 2) / 4) * ((2 * Length - Base) /( 2 * Length + Base));
	return Area;
}


int main() {

	float Length, Base;

	cout << "Please enter the value of Length\n";
	cin >> Length;
	cout << "Please enter the value of Base\n";
	cin >> Base;
	cout << "Area of Circle Inscribed in an isosceles Triangle = " << CircleAreaInscribedinanisoscelesTriangle(Length, Base);
	return 0;
}
