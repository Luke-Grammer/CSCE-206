// Program calculates various exam score statistics for a class of students 
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>
#include <limits>
 
using namespace std;

const int NUM_STUDENTS = 10; // Declaring constants
 
int main ()
{
	int students[NUM_STUDENTS], sum = 0; // Declaring variables
	int minimum = numeric_limits<int>::max(), maximum = numeric_limits<int>::min(); // Declaring max and min to the smallest and largest integer values, respectively.
	
	cout << "Exam Statistics Program v1.0" << endl;
	cout << "\nPlease enter the exam scores for each student." << endl;
	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		cout << "Enter score for student " << i + 1 << ": ";
		cin  >> students[i]; // User input for scores
		while (students[i] < 0 || students[i] > 100) // Input validation
		{
			cout << endl << "ERROR: Please enter a valid score." << endl;
			cin >> students[i];
		}
		
		if (students[i] < minimum)
			minimum = students[i]; // Is students[i] new minimum?
		
		if (students[i] > maximum)
			maximum = students[i]; // Is students[i] new maximum?
			
		sum += students[i]; // Adding students[i] to sum
	}
	
	cout << fixed << showpoint << setprecision(2); // Output formatting
	cout << endl << "EXAM STATISTICS:" << endl;
	cout << "Average Score: " << (static_cast<double>(sum)/NUM_STUDENTS) << endl; // Calculating average and casting to double before output
	cout << "Minimum Score: " << minimum << endl;
	cout << "Maximum Score: " << maximum << endl;
	cout << "Scores entered by user" << endl; 
	
	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		if (i != (NUM_STUDENTS - 1)) // Are we outputting the last term?
			cout << students[i] << ", "; // If not, use a comma
		else
			cout << students[i] << endl; // If so, so not use a comma
	}

	return 0;
}
