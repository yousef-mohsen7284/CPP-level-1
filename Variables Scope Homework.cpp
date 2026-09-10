#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int x = 72;//Gloabal Varaible
int y = 84;//Gloabal Variable


void TrainingFunction() {

	int x = 300;//Local Variable
	int y = 600;//Local Varialbe
	 
	cout << "Value of Procedure Local Variabel x = " << x << endl;
	cout << "Value of Procedure Local Variabel y = " << y << endl;

}


int main() {

	int x = 900;//Local Varia
	int y = 1000;//Local Varia
	cout << "Value of main Function Local variabel x = " << x << endl;
	cout << "Value of main Function Local  Variabel y = " << y << endl;

	TrainingFunction();

	::x++;
	::y = ::x + 25;
	cout << "Value of Global Variable x = " << ::x << endl;
	cout << "Value of Global Variable y = " << ::y << endl;

	return 0;
}
