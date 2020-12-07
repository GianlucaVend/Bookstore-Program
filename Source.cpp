#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Gianluca Venditti, Assignment 1
// October 16th, 2020
// The program takes the input from the user buying a book and displays a receipt

int main()
{
	const double TAX = 0.13;
	string booksellerName = "Amazing Booksellers";
	string bookTitle = "Book";
	string title;
	double unitPrice = 0.;
	double taxes = 0.;
	int copiesNumber = 0;
	int itemQuantity = 0;
	double totalCost = 0.;
	double subTotal = 0.;
	string enterMessage = "Enter book title:";
	string copiesMessage = "Enter number of copies:";
	string priceMessage = "Price of book:";
	string storeTitle = "Amazing Booksellers";
	string storeTitleHeader = "Title";
	string storeQuantity = "Qty";
	string storeUnitPrice = "Unit Price";
	string storeSubtotal = "Subtotal";
	string storeTax = "Tax";
	string storeTotal = "Total";
	cout << setprecision(2) << fixed;

	cout << enterMessage;
	getline(cin, bookTitle);
	cout << copiesMessage;
	cin >> copiesNumber;
	cout << priceMessage;
	cin >> unitPrice;

	subTotal = unitPrice * copiesNumber;
	taxes = subTotal * TAX;
	totalCost = subTotal + taxes;

	cout << left << setw(20) << storeTitle << endl;
	cout << setw(20) << storeTitleHeader;
	cout << right << setw(5) << storeQuantity;
	cout << setw(15) << storeUnitPrice << endl
		 << endl;
	cout << left << setw(20) << bookTitle;
	cout << right << setw(5) << copiesNumber;
	cout << setw(15) << unitPrice << endl
		 << endl;
	cout << left << setw(20) << storeSubtotal;
	cout << right << setw(20) << subTotal << endl;
	cout << left << setw(20) << storeTax;
	cout << right << setw(20) << TAX << endl;
	cout << left << setw(20) << storeTotal;
	cout << right << setw(20) << totalCost << endl
		 << endl;

	cout << endl
		 << "Program ended successfully" << endl;
	system("pause");
}