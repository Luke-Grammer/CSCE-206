// Program creates an array of random integers, displays it, then reverses it and displays it again.
// Luke Grammer
// CSCE 206

#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std; 
 
int RandomInt(int max, int min = 0){ // Generates a random number between min and max
	return (rand() % (max - min + 1)) + min;
}

void initializeArray(int array[], int size){ // Intializes array to random numbers between 1 and 'size'
	for (int i = 0; i < size; i++){
	array[i] = RandomInt(size,1);
	}		
}

void displayArray(int array[], int size){ // Displays contents of array
	cout << endl << "Array contains: ";
	for (int i =0; i < size; i++){
		cout << array[i] << " ";
	}
}

void reverseArray(int array[], int size){ // Displays reversed contents of array
	cout << endl << "Reversed array: ";
	for (int i = size; i > 0; i--){
		cout << array[i-1] << " ";
	}
}
 
int main (){
	int size; // Declaring local variable 'size'
	
	cout << "Array Reversal v1.0" << endl;
	srand(time(NULL)); // Seeding the random number generator
	
	cout << endl << "Enter the size of your array: ";
	cin >> size; // Input for size of array
	while (size <= 0){ // Input validation
		cout << endl << "ERROR: Please enter a size greater than 0";
		cout << endl << "Enter the size of your array: ";
		cin >> size;
	}
	
	int array[size]; // Declaring array of size 'size'
	
	initializeArray(array, size); // Initializing array to random numbers between 1 and 'size'
	displayArray(array, size); // Displaying contents of array
	reverseArray(array, size); // Display reversed contents of array
	
	cout << endl;
	
	return 0;
}
