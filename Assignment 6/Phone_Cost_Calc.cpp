// Program calculates cost of cell phones using pass-by-reference 
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>
 
using namespace std;

void ReadUserInput (int& numPhones, double& costPhones) // Function declaration & definition
{
	cout << endl << "How many cell phones did you buy? ";
	cin >> numPhones;
	while (numPhones <= 0) // Input validation
	{
		cout << endl << "ERROR: Input must be positive." << endl;
		cout << endl << "How many cell phones did you buy? ";
		cin >> numPhones;
	}
		
	cout << endl << "What is the cost of each cell phone? ";
	cin >> costPhones;
	while (costPhones <= 0) // Input validation
	{
		cout << endl << "ERROR: Input must be positive." << endl;
		cout << endl << "What is the cost of each cell phone? ";
		cin >> costPhones;
	}
}
 
int main ()
{
	int numofCellPhones = 0;
	double costPerCellPhone = 0; // Declaring and defining local variables
	
	cout << "Cellphone Cost Calculator v1.0" << endl;
	
	ReadUserInput (numofCellPhones, costPerCellPhone); // Call ReadUserInput with pass-by-reference variables
	
	cout << fixed << showpoint << setprecision(2); // output formatting
	cout << endl << "You bought " << numofCellPhones << " cell phones at $" << costPerCellPhone << " each,"
		 << " and the total cost is = $" << (numofCellPhones * costPerCellPhone) << endl; // Output
		 
 	return 0;
}


