#include<iostream>
using namespace std;

struct stsecrets {
	int monthlysalary;
	int yearlysalary ;
	char gender;
	bool married;
};

struct stadress {
	string city;
	string country;
	string homeadress;

};

struct Personalinf {
	string fullname;
	int age;
	stadress adress;
	stsecrets salary;
};

int main()
{
	Personalinf Training;
	Training.fullname = "Mohamed Abu-Hadhoud";
	Training.age = 44;
	Training.adress.city = "Amman";
	Training.adress.country = "Jordan";
	Training.salary.monthlysalary = 5000;
	Training.salary.yearlysalary = 5000 * 12;
	Training.salary.gender = 'M';
	Training.salary.married = 1;

	cout << "*******************************************\n";
	cout << "Name: "; cout << Training.fullname << endl;
	cout << "Age: "; cout << Training.age << endl;
	cout << "City: "; cout << Training.adress.city << endl;
	cout << "Country: "; cout << Training.adress.country << endl;
	cout << "Monthly Salary: "; cout << Training.salary.monthlysalary << endl;
	cout << "Yearly Salary: "; cout << Training.salary.yearlysalary << endl;
	cout << "Gender: "; cout << Training.salary.gender << endl;
	cout << "Married: "; cout << Training.salary.married << endl;
	cout << "*******************************************\n";


	return 0;

}



