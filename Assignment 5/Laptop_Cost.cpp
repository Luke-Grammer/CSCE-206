// Program calculates total cost, given number of laptops sold and (optionally) cost per laptop
// Luke Grammer
// CSCE 206

#include<iostream>

using namespace std;

int ComputeTotalCost(int, int = 800); // Declaring functions

int main()
{
	int costPerLaptop, laptopsSold, totalCost; // Declaring variables
	
	cout << "Laptop sale calculator v1.0" << endl;
	cout << "\nEnter the number of laptops sold: ";
	cin >> laptopsSold;
	
	while (laptopsSold < 0)
	{
		cout << "\nERROR: Input must be non-negative" << endl;
		cout << "\nEnter the number of laptops sold: ";
		cin >> laptopsSold;
	}
	
	if (laptopsSold > 3)
	{
		cout << "Enter the cost of the laptop at the discounted rate: ";
		cin >> costPerLaptop;
		
		while (costPerLaptop < 0)
		{
			cout << "\nERROR: Input must be non-negative" << endl;
			cout << "\nEnter the cost of the laptop at the discounted rate: ";
			cin >> costPerLaptop;
		}
		
		totalCost = ComputeTotalCost(laptopsSold, costPerLaptop); 
	}
	else
		totalCost = ComputeTotalCost(laptopsSold);
		
	cout << "The total cost is $" << totalCost << "." << endl;

	return 0;
}

/*FUNCTION DEFINITION*/

int ComputeTotalCost (int laptopsSold, int costPerLaptop)
{
	return (laptopsSold * costPerLaptop);
}
