// Program reads input file, calculates number of elements using a vector, and then empties the vector
// Luke Grammer
// CSCE 206

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const string FILENAME = "Numbers.txt"; // Name of input file

int main (){
	vector<int> vec1; // Declare vector 'vec1'
	int temp; // Declare temporary variable 'temp'
	ifstream infile; // Create file input stream 'infile'
	infile.open(FILENAME.c_str()); // Open file
	if(infile.fail()){
		cout << "Error: Could not open " << FILENAME << "!" << endl;
		return 0;
	}
	
	while(infile >> temp){ 
		vec1.push_back(temp); // Fill vector with elements from file
	}
	
	cout << "Vectors v1.0" << endl; 
	cout << "\nThere are " << vec1.size() << " numbers in the file: \n"; // Print number of elements in 'vec1'
	
	while(!vec1.empty()){ 
		cout << vec1.at(vec1.size()-1) << " "; // Print the value of the last element of 'vec1'
		vec1.pop_back(); // Destroy the last element of 'vec1'
	} // Repeat until 'vec1' is empty
	
	cout << endl;	
	
	return 0;
}
