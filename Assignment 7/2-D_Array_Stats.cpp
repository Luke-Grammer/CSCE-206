// Program accepts 2-d array from input file, then calculates and prints various statistics
// Luke Grammer
// CSCE 206

#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>

using namespace std;

const string FILENAME = "Numbers.txt"; // Filename
const int NUM_ROWS = 4, NUM_COLS = 4; // Size of matrix 'values'

void stats(int[NUM_ROWS][NUM_COLS]); // Function prototype

int main (){
	int values[NUM_ROWS][NUM_COLS]; // Declaring 2-D matrix 'values'
	
	cout << "2-D Arrays v1.0" << endl;
	
	ifstream infile;
	infile.open(FILENAME.c_str()); // Opening input file with name specified in string 'FILENAME'
	if (infile.fail()){
		cout << endl << "ERROR: Failed to open " << FILENAME << endl; // Error if file could not be found/opened
		return 0;
	}
	
	cout << "The matrix received from " << FILENAME << " is: " << endl;
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) { // For all positions ixj in a matrix with size specified by 'NUM_ROWS' and 'NUM_COLS'
			infile >> values[i][j]; // Store number from file in matrix 'values' (position ixj)
			cout << setw(4) << values[i][j]; // Output number
		}
		cout << endl; // Newline
	}
	
	stats(values); // Calculate and display certain statistics of matrix 'values'
	
	infile.close(); // Close input file
	return 0;
}

void stats(int values[NUM_ROWS][NUM_COLS]) {
	int sum1 = 0, sum2 = 0; // Declaring variables
	int maximum = numeric_limits<int>::min(), minimum = numeric_limits<int>::max(); // Initializing 'maximum' and 'minimum' to the smallest and largest integer values, respectively
	
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) { // For all positions ixj in a matrix with size specified by 'NUM_ROWS' and 'NUM_COLS'
			if (j == 0) {
				sum1 += values[i][j]; // Sums all numbers in first column
			}
			else if (j == 1) {
				sum2 += values[i][j]; // Sums all numbers in second column
			}
			
			if (i == 2) {
				if (values[i][j] < minimum) minimum = values[i][j]; // Finds smallest number in third row
			}
			else if (i == 3) {
				if (values[i][j] > maximum) maximum = values[i][j]; // Find largest number in fourth row
			}
		}
	}
	
	cout << endl << "Column 1 Sum = " << sum1 << endl;
	cout << "Column 2 Average = " << static_cast<double>(sum2) / NUM_ROWS << endl; // Calculate average and display
	cout << "Row 3 Minimum = " << minimum << endl;
	cout << "Row 4 Maximum = " << maximum << endl;
}
