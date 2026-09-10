#include<iostream>
#include<string>
using namespace std;

int AreaofRectangle(int Length, int Width) {
	int Area;
	Area = Length * Width;
	return Area;
}

int main() {
	int Length, Width;
	cout << "Please enter the value of Length \n";
	cin >> Length;
	cout << "Please enter the value of Width\n";
	cin >> Width;
	cout << "Area of Rectangle = " << AreaofRectangle(Length, Width) << endl;
	return 0;
}