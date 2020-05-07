// Program accepts name and ID# for N students, checking each ID# for uniqueness as it's entered
// Luke Grammer
// CSCE 206

#include <iostream>

using namespace std;

const int SIZE = 10; // Number of students in the class

int main (){
	string names[SIZE]; // Array to hold student names
	int ID[SIZE]; // Array to hold student IDs
	
	for(int i = 0; i < SIZE; i++){
		bool again = true;
		cout << "Enter student name: "; // Get i'th students name
		getline(cin, names[i]);

		
		while(again == true){	
			bool foundCopy = false; // Reset 'foundCopy'	
			cout << "Enter the ID for " << names[i] << ": "; // Get i'th students ID
			cin >> ID[i];
			cin.ignore( );	
			
			for (int j = 0; j < i; j++){ // Search all previously entered IDs
				if(ID[j] == ID[i]){ // If ID entered matches a previously entered ID
					cout << "That ID has already been entered for another student!\n"; // Display error and get new ID
					foundCopy = true; // Set 'foundCopy' to true, indicating that a matching ID was found
					again = true; // Enter 'while' loop again to re-prompt for ID
				}
			}
			
			if (foundCopy == false){ // If no matching IDs were found
				again = false; // exit 'while' loop and enter next 'for' loop iteration
			}
		}
	}
	
	cout << "\nStudents: "; // Display students names and IDs		
	for (int i = 0; i < SIZE; i++){
		cout << endl << ID[i] << "\t" << names[i];
	}
	
	cout << endl;
	
	return 0;
}
