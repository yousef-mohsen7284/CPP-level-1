#include<iostream>
using namespace std;

struct Book {

	string Title;
	string Author;
	double Price;

};

int main()
{


	Book Book1, Book2;
	Book1.Title = "El Majrayat";
	Book1.Author = "Dr Abdelwahab Elminstiry";
	Book1.Price = 500;

	Book2.Title = "El 3elm w eleman";
	Book2.Author = "DR Mostafa Mahomoud";
	Book2.Price = 600;

	cout << "********************************\n";
	cout << "Book 1:\n";
	cout << "Tittle:"; cout << Book1.Title << endl;
	cout << "Author:"; cout << Book1.Author << endl;
	cout << "Price:"; cout << Book1.Price << endl;
	cout << "Book 2:\n";
	cout << "Tittle:"; cout << Book2.Title << endl;
	cout << "Author:"; cout << Book2.Author<< endl;
	cout << "Price:"; cout << Book2.Price << endl;
	cout << "********************************\n";

	return 0;

}