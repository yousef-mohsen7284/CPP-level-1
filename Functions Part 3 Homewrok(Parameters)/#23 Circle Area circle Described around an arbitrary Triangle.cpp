#include<iostream>
#include<string>
#include<cmath>

using namespace std;
float CircleAreaDescribedAroundanArbitraryTriangle(float a, float b, float c) {
	const float PI = 3.14;
	float P = (a + b + c) / 2;
	float Area;
	Area = PI * pow((a * b * c) / (4 * (sqrt(P * (P - a) * (P - b) * (P - c)))), 2);
	return Area;
}

int main() {

	float a, b, c;
	cout << "Please enter the Value of a \n";
	cin >> a;
	cout << "Please enter the Value of b \n";
	cin >> b;
	cout << "Please enter the Value of c \n";
	cin >> c;
	cout << "Area of Circle Described Around Arbitrary Triangle = " << CircleAreaDescribedAroundanArbitraryTriangle(a, b, c) << endl;
	return 0;

}