// Program outputs various statistics about a range of numbers from 1 to an end value specified by the user
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double average[4], biggest, smallest;
	char again; // Variable Declaration

	cout << "Number Loop Software v1.0\n";
	cout << "\nThis software will take an end value entered by the user and calculate" << endl;
	cout << "the averages of all the numbers from one to n, the even numbers, the odd " << endl;
	cout << "numbers, every third number, and the highest and lowest of those averages." << endl;
	
	do
	{
		
		int n, sum = 0, sumEven = 0, sumOdd = 0, sumThird = 0; 
		int numTermsEven = 0, numTermsOdd = 0, numTermsThird = 0; // Variable Declaration and Initialization
		
		for (int k = 0; k <= 3; k++)
			average[k] = 0; // Initializing 'average' to 0
			
		cout << "\nPlease enter your end value as an integer: ";
		cin >> n;
		
		int i = 1;
		for (; i <= n; i++)
		{
			sum += i;
			
			if ((i % 2) == 0) // If i is even
			{
				sumEven += i;
				numTermsEven++;
			}
			else // If i is odd
			{
				sumOdd += i;
				numTermsOdd++;
			}
			
			if (((i-1) % 3) == 0) // If i is any 3n + 1 where n is an integer greater than or equal to zero
			{
				sumThird += i;
				numTermsThird++;
			}
		}
		
		cout << fixed << showpoint << setprecision(2); // Output formatting

		if ((i-1) != 0)
		average[0] = static_cast<double>(sum)/ (i-1); // Finding average of all numbers 1 -> n
		
		if (numTermsEven != 0)
		average[1] = static_cast<double>(sumEven)/ numTermsEven; // Finding average of all even numbers 1 -> n
		
		if (numTermsOdd != 0)
		average[2] = static_cast<double>(sumOdd)/ numTermsOdd; // Finding average of all odd numbers 1 -> n
		
		if (numTermsThird != 0)
		average[3] = static_cast<double>(sumThird)/ numTermsThird; // Finding average of every third number 1 -> n
		
		biggest = average[0];
		for (int j = 1; j <= 3; j++)
		{
			if (biggest < average[j])
			biggest = average[j]; // Finding largest average
		}
			
		smallest = average[0];
		for (int j = 1; j <= 3; j++)
		{
			if (smallest > average[j])
			smallest = average[j]; // Finding smallest average
		}
		
		cout << "\n\nAverage of all numbers (1 -> n): " << average[0] << endl;
		cout << "Average of all even numbers: " << average[1] << endl;
		cout << "Average of all odd numbers: " << average[2] << endl;
		cout << "Average of every third number: " << average[3] << endl;
		cout << "Highest Average: " << biggest << endl;
		cout << "Lowest Average: " << smallest << endl;
		
		cout << "\nWould you like to try again? (y/n): ";
		cin >> again;
		
	} while (again == 'Y' || again == 'y');

	return 0;
}
