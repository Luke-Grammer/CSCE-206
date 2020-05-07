// Program uses pointers to swap two arrays
// Luke Grammer
// CSCE 206

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 100; // Size of array to be swapped (must be greater than 1)

int RandomInt(int max, int min = 0){ // Generates a random number between min and max
	// Requires cstdlib header
	// (ctime header required to seed with time in main)
	return (rand() % (max - min + 1)) + min;
}

bool swapArray (int array[], int size){	
	// Requires no header
	int *LeftPtr = array, *RightPtr = &array[size/2], temp; 
	// Initialize pointers to the addresses of the first and middle elements of the array, as well as a temporary variable	
	if (size % 2 != 0)
		RightPtr += 1; // If array size is odd, increment the right pointer past the middle element
		
	for (int i = 0, j = size - 1; j > i; i++, j--){ // Initialize i and j to opposite ends of the array, and end loop when they meet
		temp = *LeftPtr; 
		*LeftPtr = *RightPtr;
		*RightPtr = temp; // Swap the values pointed at by 'LeftPtr' and 'RightPtr'
		LeftPtr++; // Increment address pointed to by pointers by 4 bytes
		RightPtr++;
	}
}

int main(){
	srand(time(NULL)); // Seed random numbers
	int array[SIZE]; // Declare array
	
	if (SIZE <= 1){ // If array size is 1
		cout << "Error: Array size must be greater than 1!" << endl;
		return 0;
	}

	cout << endl << "Elements of array:" << endl;
	for (int i = 0; i < SIZE; i++){
		array[i] = RandomInt(1000); // Assign elements of array to a random integer between 0 and 1000
		cout << array[i] << " "; // Display contents of array
	}
	
	swapArray(array, SIZE); // Swap first n/2 elements in passed array with last n/2 elements (n/2-(1/2) if odd)
	
	cout << endl << "Elements of array:" << endl;
	for (int i = 0; i < SIZE; i++){
		cout << array[i] << " "; // Display contents of array
	}
	
	cout << endl;
	return 0;
}


