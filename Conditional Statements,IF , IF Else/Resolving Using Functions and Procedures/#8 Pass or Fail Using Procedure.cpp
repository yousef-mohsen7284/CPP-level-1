#include<iostream>


using namespace std;

void MarkReader(float& Mark) {

	cout << "Please Enter Your Mark?\n";
	cin >> Mark;

}



int main() {

	float Mark;
	MarkReader(Mark);

	if(Mark >= 50){

		cout << "PASS!\n";
	}
	else {

		cout << "FAIL!\n";
	}

	return 0;
}