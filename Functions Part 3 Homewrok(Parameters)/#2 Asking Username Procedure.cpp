#include<iostream>
#include<string>
using namespace std;

void ReadingName() {

	string Name;
	cout << "Please Enter Your Name ?\n";
	getline(cin, Name);
	cout << "User Name is: " << Name << endl;
}

int main() {


	ReadingName();
	return 0;

}