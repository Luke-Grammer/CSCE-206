// Program calculates paycheck with overtime bonus given hours worked
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

const double WAGE = 11.34;

int main()
{
	int hours;
	double salary;
	string bonus;

	cout << "Paycheck Software v1.0\n";
	cout << "\nEnter number of hours worked this week: ";
	cin >> hours;
	
	if (hours < 10 && hours >= 0)
	{
		bonus = "0%";
		salary = hours * WAGE;
	}
		
	else if (hours < 21 && hours >= 10)
	{
		bonus = "10%";
		salary = 1.1 * hours * WAGE;
	}
		
	else if (hours < 31 && hours >= 21)
	{
		bonus = "20%";
		salary = 1.2 * hours * WAGE;
	}
		
	else if (hours <= 50 && hours >= 31)
	{
		bonus = "30%";
		salary = 1.3 * hours * WAGE;
	}
		
	else if (hours > 50)
	{
		bonus = "40%";
		salary = 1.4 * hours * WAGE;
	}
	
	else
	{
		cout << "\n\nInvalid input, number must be positive.\n";
		return 0;
	}
		
	cout << "\nYou will recieve a " << bonus << " bonus on the base pay.";
	cout << "\nYour paycheck is: $" << fixed << showpoint << setprecision(2) << salary << "\n";
	
	return 0;
}
