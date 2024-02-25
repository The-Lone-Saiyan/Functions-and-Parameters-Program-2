#include <iostream>
#include <iomanip>

using namespace std;

void UserInput(double& P1, double& P2, double& P3);
void InflationFormula1Year(double& P1, double& P2);
void InflationFormula2Years(double& P2, double& P3);

int main()
{
	double CurrentPrice, LastYearPrice, TwoYearsAgoPrice;

	UserInput(CurrentPrice, LastYearPrice, TwoYearsAgoPrice);

	InflationFormula1Year(CurrentPrice, LastYearPrice); 
	
	InflationFormula2Years(LastYearPrice, TwoYearsAgoPrice);

	return 0;
}

void UserInput(double& P1, double& P2, double& P3)
{
	cout << "Please enter the current item price: ";
	cin >> P1;

	cout << "\nPlease enter the price from a year ago: ";
	cin >> P2;

	cout << "\nPlease enter the price from two years ago: ";
	cin >> P3;
}

void InflationFormula1Year(double& P1, double& P2)
{
	double Inflation = (((P2 - P1) / P1) * 100);

	cout << "\nCurrent inflation: " << setprecision(2) << fixed << Inflation << "%" << endl;
}

void InflationFormula2Years(double& P2, double& P3)
{
	double Inflation = (((P3 - P2) / P2) * 100);

	cout << "\nInflation Over Two Years: " << setprecision(2) << fixed << Inflation << "%" << endl;
}