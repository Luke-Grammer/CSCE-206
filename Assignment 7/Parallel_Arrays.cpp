// Program creates a parallel arrays to keep track of cost and year of manufacture for N different items and calculates revenue
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 10;
const double YRDISCOUNT_1991_2000 = 0.4, YRDISCOUNT_2001_2010 = 0.2, YRDISCOUNT_2011_2017 = 0.1; // Declaring global constants

int main () {
	int yearofmanufacture[SIZE], soldcount[SIZE];
	double cost[SIZE], revenue = 0; // Declaring local variables

	cout << "Parallel Arrays v1.0" << endl;
	
	cout << endl << "Enter the cost for all " << SIZE << " types of items, separated by a space" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> cost[i]; // Input for array 'cost'
		while (cost[i] < 0) { // Input validation (cost[i] must be >= 0)
			cout << "ERROR: Cost must be positive" << endl << endl;
			cin >> cost[i]; 
		}
	}
	
	cout << endl << "Enter the year of manufacture for all " << SIZE << " types of items, separated by a space" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> yearofmanufacture[i]; // Input for array 'yearofmanufacture'
		while (yearofmanufacture[i] < 1991 || yearofmanufacture[i] > 2017) { // Input validation (1991 <= yearofmanufacture[i] <= 2017)
			cout << "ERROR: Year of manufacture must be between 1991 & 2017" << endl << endl;
			cin >> yearofmanufacture[i];
		}
	}
	
	cout << endl << "Enter the number of items sold for all " << SIZE << " types of items, separated by a space" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> soldcount[i]; // Input for array 'soldcount'
		while (soldcount[i] < 0) { // Input validation (soldcount[i] must be >= 0)
			cout << "ERROR: Number of items sold must be positive" << endl << endl;
			cin >> soldcount[i];
		}
	}
	
	for (int i = 0; i < SIZE; i++) {
		if(yearofmanufacture[i] >= 1991 && yearofmanufacture[i] <= 2000) // If yearofmanufacture[i] is between 1991 and 2000
			revenue += YRDISCOUNT_1991_2000 * soldcount[i] * cost[i];

		else if(yearofmanufacture[i] >= 2001 && yearofmanufacture[i] <= 2010) // If yearofmanufacture[i] is between 2001 and 2010
			revenue += YRDISCOUNT_2001_2010 * soldcount[i] * cost[i];

		else // If yearofmanufacture[i] is between 2011 and 2017
			revenue += YRDISCOUNT_2011_2017 * soldcount[i] * cost[i];
	}
	
	cout << endl << "The total revenue earned is $" << fixed << showpoint << setprecision(2) << revenue << endl; // Display
	
	return 0;
}
