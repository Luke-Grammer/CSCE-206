// Program implements basic bubble sort and selection sort, sorting an array using each of them
// Luke Grammer
// CSCE 206

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 100; // Size of larger array (smaller array is of size SIZE/2)

int RandomInt(int max, int min = 0){ // Generates a random number between min and max
	// Requires cstdlib header
	// (ctime header required to seed with time in main)
	return (rand() % (max - min + 1)) + min;
}

void bubbleSortDecreasing(int array[], int size){ // Bubble Sort function
	// Requires no headers
	bool redo = true; // Declare and Define 'redo'
	int temp; // Declare temporary variable 
	bool didSwap; // Declare 'didSwap' to indicate whether a swap was performed 
	
	while(redo == true){ 
		didSwap = false; // Reset 'didSwap' to false
		
		for(int i = 0; i < size-1; i++){
			if (array[i] < array[i+1]){ // If the i'th element is smaller than the next element
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp; // Switch elements
				didSwap = true; // Set 'didSwap' to true, indicating that a swap was performed
			}
		}
		if(didSwap == false) redo = false; // If no swaps were performed, leave 'while' loop
	}
}

void selectionSortIncreasing(int array[],int size){ // Selection Sort function
	// Requires no headers
	int index, temp; // Declare 'index' and 'temp'
	
	for (int i = 0; i < size-1; i++){ 
		index = i; // Set 'index' equal to 'i'
		for (int j = i + 1; j < size; j++){ // For all elements in the array greater than i
			if (array[j] < array[index]){ // If the value in the j'th location is smaller than the value in the i'th location
				index = j; // Set 'index' equal to j
			}
		}
		if(index != i){ // If 'index' is no longer equal to 'i' (If the element at index 'i' was not the smallest value in the array)
			temp = array[i];
			array[i] = array[index];
			array[index] = temp; // Swap values at array elements 'i' and 'index'
		}
	}
}

int main (){
	int RandomNums[SIZE], TerminalSum[SIZE/2]; // Declare arrays 'RandomNums' and 'TerminalSum'
	srand(time(NULL)); // Seed random number generation
	
	cout << "Sorting Algorithms v1.0" << endl;
	
	cout << endl << "Contents of RandomNums: " << endl; // Define and display each element of 'RandomNums' with an integer 0 <= n <= 1000
	for (int i = 0; i < SIZE; i++){
		RandomNums[i] = RandomInt(1000); 
		cout << RandomNums[i] << " ";	
	}
	
	cout << endl << endl << "RandomNums after sorting in decreasing order: " << endl;
	bubbleSortDecreasing(RandomNums, SIZE);	
	for (int i = 0; i < SIZE; i++) cout << RandomNums[i] << " ";
	
	cout << endl << endl << "Contents of TerminalSum: " << endl;
	for (int i = 0, j = SIZE - 1; i < SIZE/2; i++, j--){
		TerminalSum[i] =  RandomNums[i] + RandomNums[j];
		cout << TerminalSum[i] << " ";
	}
	
	cout << endl << endl << "TerminalSum after sorting in increasing order: " << endl;
	selectionSortIncreasing(TerminalSum, SIZE/2);
	for (int i = 0; i < SIZE/2; i++) cout << TerminalSum[i] << " ";	
	
	cout << endl;
	return 0;
}
