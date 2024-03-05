#include <iostream>
#include <iomanip>

using namespace std;

// Gets the input from user
// Pre-Condition: Prices from item are read by reference.
// Post-Condition: Passes prices to InflationFormula function.
void UserInput(double& P1, double& P2, double& P3);

// Calculates inflation rate for past year and two years ago.
// Pre-Condition: Receives by reference all three prices from UserInput function.
// Post-Condition: Calculates the inflation rate by using the inflation formula.
void InflationFormula(double& P1, double& P2, double& P3);

// Shows the output of the inflation formula.
// Pre-Condition: Receives the calculated inflation by reference.
// Post-Condtion: Shows the inflation rates on screen. 
void InflationOutput(double& Inflation, double& Inflation2);

int main()
{
	double CurrentPrice, LastYearPrice, TwoYearsAgoPrice, Inflation, Inflation2;

	UserInput(CurrentPrice, LastYearPrice, TwoYearsAgoPrice);

	InflationFormula(CurrentPrice, LastYearPrice, TwoYearsAgoPrice); 

	InflationOutput(Inflation, Inflation2);

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

void InflationFormula(double& P1, double& P2, double& P3)
{
	double Inflation = (((P2 - P1) / P1) * 100);
	double Inflation2 = (((P3 - P2) / P2) * 100);
}

void InflationOutput(double& Inflation, double& Inflation2)
{
	double P1, P2, P3;
	
	cout << "\nCurrent inflation: " << setprecision(2) << fixed << InflationFormula(P1, P2, P3) << "%" << endl;
	InflationFormula(P1, P2, P3);
	cout << "\nInflation Over Two Years: " << setprecision(2) << fixed << Inflation2 << "%" << endl;
}