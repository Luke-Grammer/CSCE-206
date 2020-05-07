// Program takes a series of positive integers, and averages all the even numbers
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int num;
	double average;
	int sum = 0;
	int numTerms = 0;

	cout << "Even Number Averaging Software v1.0\n";
	cout << "\nThis software will take a series of positive numbers until it reaches a ";
	cout << "\nnegative number, and will then average all of the even numbers input." << endl;
	
	cout << "\nPlease enter a positive number to start: ";
	cin >> num;
	
	if (num % 2 == 0) // Checks if entry is even
	{
		sum = sum + num; // Sum of terms being averaged
		numTerms++; // Counter for number of terms being averaged
	}
	
	for (int i = 1; num > 0; i++)
	{
		cout << "\nEnter another positive number to continue or a negative (or zero) to quit: ";
		cin >> num;
		
		if (num % 2 == 0 && num > 0) // Checks if entry is even and non-negative
		{
			sum += num; // Sum of terms being averaged
			numTerms++; // Counter for number of terms being averaged
		}
	}

	average = static_cast<double>(sum) / numTerms; // Assigns average to sum/numTerms as a double
	
	if (fmod(average, 1) != 0)
		cout << fixed << showpoint << setprecision(3); // Adds decimal places to display if the result is not equal to an integer
		 
	cout << "\nThe average of the even numbers is " << average << ".\n";

	return 0;
}
