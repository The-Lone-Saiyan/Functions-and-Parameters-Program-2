#include <iostream>

using namespace std;

double CurrentPrice, LastYearPrice, TwoYearsAgoPrice;

double InflationFormula(double &P1, double &P2, double &P3)
{
	double Inflation1 = ((P2 - P1) / P2);
	double Inflation2 = ((P3 - P2) / P3);

	return Inflation1, Inflation2;
}

int main()
{
	cout << "Please enter the current item price: ";
		cin >> CurrentPrice;

	cout << "\nPlease enter the price from a year ago: ";
		cin >> LastYearPrice;

	cout << "\nPleast enter the price from two years ago: ";
		cin >> TwoYearsAgoPrice;

	cout << "Current Price: " << CurrentPrice << endl;

	cout << "\nPrice one year ago: " << LastYearPrice << endl;

	cout << "\nPrice two years ago: " << TwoYearsAgoPrice << endl;

	cout << "\nCurrent inflation: " << endl;

	cout << "\nInflation Over Two Years: " << endl;

	return 0;
}