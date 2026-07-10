#include<iostream>
using namespace std;

enum encolour{red,green,white,yellow};
enum engender { Male, Female };
enum enMaritalStatus{Married=200,Single=100};


struct stAdress {
	string streetname;
	string BuildingNo;
	string PoBox;
	string Zipcode;
};

struct stcontactInfo {

	string phone;
	string email;
	stAdress adress;
};

struct stPerson {
	string firstname;
	string lastname;
	stcontactInfo contactinfo;
	enMaritalStatus maritalstatus;
	engender gender;
	encolour favouritecolor;
};

int main()
{
	stPerson person1;
	person1.firstname = "Yousef";
	person1.lastname = "Mabrouk";
	person1.contactinfo.email = "uyshfjoahfhmf22@mail.com";
	person1.contactinfo.phone = "+2829727291929918";
	person1.contactinfo.adress.BuildingNo = "22";
	person1.contactinfo.adress.PoBox = "666";
	person1.contactinfo.adress.Zipcode = "93733993";
	person1.contactinfo.adress.streetname = "Elabahr Street";
	person1.favouritecolor = ::white;
	person1.gender = ::Male;
	person1.maritalstatus = ::Single;

	cout << person1.favouritecolor;

	return 0;

}