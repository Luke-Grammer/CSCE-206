// Program accepts some number of digits as strings, and finds the numeric sum, largest value, and smallest value
// Luke Grammer
// CSCE 206

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>

using namespace std;

const int MAX_SIZE = 8; // Maximum number of accepted digits
const int MIN_SIZE = 4; // Minimum number of accepted digits

int main(){
	char string1[MAX_SIZE + 1]; // Declaring variables
	int sum = 0, num;
	int largest = numeric_limits<int>::min(), smallest = numeric_limits<int>::max();
	
	cout << "Enter between " << MIN_SIZE << " and " << MAX_SIZE << " single digit numbers without spaces between them: " << endl;
	cin >> string1; // User input for string1
	while (strlen(string1) > MAX_SIZE || strlen(string1) < MIN_SIZE) { // Input validation
		cout << "Error, invalid number of digits" << endl;
		cout << "Enter between " << MIN_SIZE << " and " << MAX_SIZE << " single digit numbers without spaces between them: " << endl;
		cin >> string1;
	}
	
	num = atoi(string1); // Giving num the number given by user
	int count = 0; // Initializing count to 0
	while(num) {
		sum += num % 10; // Add last digit in number to sum
		
		if (num % 10 < smallest) 
			smallest = num % 10; // Is last digit new smallest?
		
		if (num % 10 > largest)
			largest = num % 10; // Is last digit new largest?
		
		num /= 10; // Remove last digit in number
		count++; // Add one to count
	}
	if (count < strlen(string1)){ // If less numbers are processed than there were digits in the string (leading zeros)
		smallest = 0; // The smallest number must be zero
	}
	
	cout << endl << "Sum of all digits: " << sum; // Display statistics
	cout << endl << "Largest value: " << largest;
	cout << endl << "Smallest value: " << smallest << endl;
	
	return 0;
}


