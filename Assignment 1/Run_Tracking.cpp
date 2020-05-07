// Program prompts user for floating point inputs, and outputs sum and average
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>

using namespace std;

double sundayMiles, mondayMiles, tuesdayMiles, wednesdayMiles, thursdayMiles, fridayMiles, saturdayMiles;
double sum, average;

int main ()
{
	cout << "Run Tracking v1.0\n\n";
	cout << "Enter miles run on Sunday: ";
	cin >> sundayMiles; //Prompts and collects distance ran on Sunday.
	
	cout << "\nEnter miles run on Monday: ";
	cin >> mondayMiles; //Prompts and collects distance ran on Monday.
	
	cout << "\nEnter miles run on Tuesday: ";
	cin >> tuesdayMiles; //Prompts and collects distance ran on Tuesday.
	
	cout << "\nEnter miles run on Wednesday: ";
	cin >> wednesdayMiles; //Prompts and collects distance ran on Wednesday.
	
	cout << "\nEnter miles run on Thursday: ";
	cin >> thursdayMiles; //Prompts and collects distance ran on Thursday.
	
	cout << "\nEnter miles run on Friday: ";
	cin >> fridayMiles; //Prompts and collects distance ran on Friday.
	
	cout << "\nEnter miles run on Saturday: ";
	cin >> saturdayMiles; //Prompts and collects distance ran on Saturday.
	
	sum = sundayMiles + mondayMiles + tuesdayMiles + wednesdayMiles + thursdayMiles + fridayMiles + saturdayMiles; //Calculates total distance run and stores value in 'sum'.
	average = sum / 7; //Divides sum by the number of days in the week to find average distance run, then stores value in 'average'.
	
	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\nTotal distance run was " << sum << " miles";
	cout << "\nAverage distance run was " << average << " miles"; //Outputs values stored in 'sum' and 'average'
	
	return 0;
}
