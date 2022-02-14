//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//* Program name    : L1-2                                              *
//*                                                                     *
//* Written by      : Justin Calderon                                   *
//*                                                                     *
//* Purpose         : This program is designed to calculate the original*                                          
//*                   price of an item, mark up price, and sales tax to *                                               
//*                   determine the final price of the item.            *                         
//*                                                                     *
//*                                                                     *
//*---------------------------------------------------------------------*
//* Change Log:                                                         *
//*                         Revision                                    *
//*       Date    Changed  Rel Ver Mod Purpose                          *
//* 02/13/22     jcalderon 000.000.000 Initial release of program       *
//*                                                                     *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	double originalPrice;
	double markUp;
	double salesTaxRate;
	double percentage;
	double sellPrice;
	double salesTax;
	double finalPrice;

	cout << "Justin Calderon\t" << "L1-2\t" << "L1-2.exe" << endl;

	// Display prompt to user, store input value in originalPrice
	cout << "Enter the original price of the item: ";
	cin >> originalPrice;
	cout << endl;
	// Display marked up price prompt to user, store input value in markUp;
	cout << "Enter the marked up percentage: ";
	cin >> markUp;
	cout << endl;
	// Display sales tax prompt to user, store input value in salesTax;
	cout << "Enter the sales tax rate: ";
	cin >> salesTaxRate;
	cout << endl;
	// Display original price
	cout << "The original price = $" << originalPrice;
	cout << endl;
	// Display marked up price
	cout << "The price is marked up by " << markUp;
	cout << "%" << endl;
	// Acquire value of percentage by dividing markUp by 100
	percentage = markUp / static_cast<double>(100);
	// Calculate sellPrice by multiplying percentage and originalPrice. Add originalPrice back to sellPrice value to get new value for sellPrice.
	sellPrice = percentage * originalPrice + originalPrice;
	// Display new sellPrice value
	cout << "The value of sellPrice = $" << sellPrice;
	cout << endl;
	// Display sales rate
	cout << "The sales rate = " << salesTaxRate;
	cout << "%";
	cout << endl;
	// Calculate salesTax by multiplying sellPrice and salesTaxRate
	salesTax = sellPrice * salesTaxRate / static_cast<double>(100);
	// Display sales tax
	cout << "The sales tax = $" << salesTax;
	cout << endl;
	// Calculate finalPrice by adding sellPrice to salesTax
	finalPrice = sellPrice + salesTax;
	// Display finalPrice
	cout << "The final price = " << finalPrice;
	cout << endl;

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

}