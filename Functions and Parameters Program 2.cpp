#include <iostream>

using namespace std;

double CurrentPrice, LastYearPrice, TwoYearsAgoPrice;

int main()
{
	cout << "Please enter the current item price: ";
		cin >> CurrentPrice;

	cout << "\nPlease enter the price from a year ago: ";
		cin >> LastYearPrice;

	cout << "\nPleast enter the price from two years ago: ";
		cin >> TwoYearsAgoPrice;

	return 0;
}