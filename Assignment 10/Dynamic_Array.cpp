// Program takes an array, allocates a new array on the heap, and copies even numbers in old array to new array
// Luke Grammer
// CSCE 206

#include <iostream>

using namespace std;

void newArray(int array1[], int size){
	// Requires iostream header
	int index = 0, *array2 = new int[size]; // Declaring variables
	
	cout << endl << "Argument array: "; 
	for (int i = 0; i < size; i++){ 
		cout << *(array1 + i) << " "; // Output i'th array element
		if (i % 2 == 0){ // If i is even (element number is odd) 
			*(array2 + index) = *(array1 + i); // Copy to next available element in new array
			index++; // Increment next available element 
		}
	}
	
	cout << endl << "New array: ";
	for (int i = 0; i < size; i++){
		if (i % 2 != 0){ // If i is odd (element number is even)
			*(array2 + index) = *(array1 + i); // Copy to next available element in new array
			index++; // Increment next available index
		}
		cout << *(array2 + i) << " ";	// Output i'th array element
	}
	
	delete[] array2; // Free dynamically allocated memory
}

int main(){
	int size; // Declaring variables
	cout << "Enter array size: "; 
	cin >> size; // User input for array size
	
	cout << "Please enter " << size << " array elements: ";	
	int array[size]; 
	for (int i = 0; i < size; i++){
		cin >> array[i]; // User input for array elements
	}
	
	newArray(array, size);
	
	cout << endl;
	return 0;
}


