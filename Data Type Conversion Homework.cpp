#include<iostream>
#include<string>
using namespace std;
int main()
{
	string st1;
	st1 = "43.22";
	int N1;
	N1 = 20;
	double N2;
	N2 = 33.5;
	float N3;
	N3 = 55.23;
	////////////////////////////////////
	cout << "from string st1(43.22) to : \n";
	cout << "1:double = " << stod(st1) << endl;
	cout << "2:float = " << stof(st1) << endl;
	cout << "3:int = " << stoi(st1) << endl;
	cout << "*********************************************\n";
	cout << "from integer N1(20) to : \n";
	cout << "string : " << to_string(N1) << endl;
	cout << "from double N2(33.5) to : \n";
	cout << "string: " << to_string(N2) << endl;
	cout << "*********************************************\n";
	cout << "from float N3(55.23) to : \n";
	cout << "string :" << to_string(N3) << endl;
	int N4 = N3;//implicit conversion 
	cout << "integer (implicit conversion):" << N4 << endl;
	N4 = int(N3);//explicit conversion
	cout << "integer (explicit conversion):" << N4 << endl;
	N4 = (int)N3;//explicit conversion (C-Style)
	cout << "integer (explicit conversion (C-Style)):" << N4 << endl;
	return 0;
}
