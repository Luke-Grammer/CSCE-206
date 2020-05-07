// Program calculates approximate rent for user given location and timeframe
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{	
	double input, months, base, upToFive, moreThanFive, rent;
	string city;

	do
	{
		cout << "Rent Budget Software v1.0";
		cout << "\n----------------------------";
		cout << "\n1. College Station" 
			 << "\n2. Navasota"
		     << "\n3. Brenham" 
			 << "\n4. Quit\n";
		cout << "\nPlease choose an option (1-4): ";
		cin >> input;
	
		if (input < 1 || fmod(input, 1) != 0 || input > 4) // Input validation for input (makes sure input is an integer between 1 and 4 inclusive)
		{
			cout << "\nERROR: Invalid Input, please select one of the available options.\n\n";
		}
	} while (input < 1 || fmod(input, 1) != 0 || input > 4);
		
	switch(static_cast<int>(input)) //Casting input to int for switch (double because fmod was called for input validation to make sure input was not a decimal number)
	{
		case 1:
			base = 500;
			upToFive = 1.7;
			moreThanFive = 0.9;
			city = "College Station";
		break;
	
		case 2:
			base = 400;
			upToFive = 1.5;
			moreThanFive = 0.8;
			city = "Navasota";
		break;
	
		case 3:
			base = 300;
			upToFive = 1.2;
			moreThanFive = 0.7;
			city = "Brenham";
		break;
	
		case 4:
		return 0;
	}

	cout << "\nAnd how many months would you like to stay in " << city << "?\n";
	cin >> months;
	
	while (months <= 0) // Input validation for months (makes sure months is greater than zero)
	{
		cout << "\nError: Invalid Input, please enter a positive value: ";
		cin >> months;	
	}
	
	if (months > 5)
		rent = months * base * moreThanFive;
	else
		rent = months * base * upToFive;
	
	cout << "\nYou would spend a total of $" << fixed << showpoint << setprecision(2) << rent << " on rent.\n";
}

