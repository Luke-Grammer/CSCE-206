// Program uses pointers to swap two numbers
// Luke Grammer
// CSCE 206

#include <iostream>

using namespace std;

int main(){
	int temp, P, *Pptr = &P, Q, *Qptr = &Q; // Declare P, Q, and pointers to their addresses
	
	cout << "Enter value for P: ";
	cin >> P; // User defined value for P
	cout << "Enter value for Q: ";
	cin >> Q; // User defined value for Q
	
	cout << "Before Swapping:\n";
	cout << "P = " << *Pptr << " Q = " << *Qptr << endl; // Display contents of addresses pointed to by the pointers
	
	temp = *Qptr;
	*Qptr = *Pptr;
	*Pptr = temp; // Swap contents of addresses pointed to by the pointers
	
	cout << "After Swapping:\n";
	cout << "P = " << *Pptr << " Q = " << *Qptr << endl; // Display new contents
	
	return 0;
}


