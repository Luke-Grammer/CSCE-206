// Program outputs total cost given price of items and total quantity purchased
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>

using namespace std;

int quantity1, quantity2, quantity3, quantity4;
double price1, price2, price3, price4, totalCost;

int main ()
{
	cout << "Billing Software v1.0\n";
	
	cout << "\nEnter price of first item: ";
	cin >> price1;
	cout << "\nEnter quantity of first item: ";
	cin >> quantity1; //Prompts user for cost and quantity of first item.
	
	cout << "\nEnter price of second item: ";
	cin >> price2;
	cout << "\nEnter quantity of second item: ";
	cin >> quantity2; //Promtps user for cost and quantity of second item.
	
	cout << "\nEnter price of third item: ";
	cin >> price3;
	cout << "\nEnter quantity of third item: ";
	cin >> quantity3; //Prompts user for cost and quantity of third item.
	
	cout << "\nEnter price of fourth item: ";
	cin >> price4;
	cout << "\nEnter quantity of fourth item: ";
	cin >> quantity4; //Prompts user for cost and quantity of fourth item.
	
	totalCost = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3) + (price4 * quantity4); 
	//Finds total cost by summing the prices multiplied by their respective quantities and stores value in 'totalCost'.
	
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nThe total cost is $" << totalCost << "."; //Displays 'totalCost'.
	
	return 0;
}
