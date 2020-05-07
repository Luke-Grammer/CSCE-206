// Program appends one array to another, and stores the result in a dynamic array
// Luke Grammer
// CSCE 206

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	string string1, string2; // Declaring variables
	char *string3;
	
	cout << "Please enter the first string: ";
	getline(cin, string1); // Input for first string
	
	cout << endl << "Please enter the second string: ";
	getline(cin, string2); // Input for second string
	
    string3 = new char[string1.length() + string2.length() + 1];
    // Allocating memory for a character array large enough to accommodate string1 and string2
    string3[string1.length() + string2.length()] = '\0'; // adding null-terminator to character array
	    
	for (int i = 0; i < (string1.length() + string2.length()); i++){
		if (i < string1.length()) // If there are more values in string1
			string3[i] = string1[i]; // Copy current value from string1 to new string
		else
			string3[i] = string2[i - string1.length()]; // otherwise, copy current value from string2
	}
	
    cout << endl << "First string: "; // Output first string
    for (int i = 0; i < string1.length(); i++){
    	cout << string1[i];
    }
    
    cout << endl << "Second string: "; // Output second string
    for (int i = 0; i < string2.length(); i++){
    	cout << string2[i];
    }
    
	cout << endl << "Third string: " << string3 << endl; // Output third string
	delete[] string3; // Free dynamically allocated memory
	return 0;
}


