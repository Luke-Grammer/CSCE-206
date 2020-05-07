// Program simulates n random coin flips, and then outputs calculated probability 
// Luke Grammer
// CSCE 206

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
 
using namespace std;

int NUM_TOSSES, NUM_HEADS, NUM_TAILS; // Declaring global variables

string BinaryFlip() // Function definition and declaration
{
	NUM_TOSSES++;

	bool isTail;
	isTail = (rand() % 2); // Generate a random binary integer and assign it to 'isTail'
	
	if(isTail)
	{
		NUM_TAILS++; // Increment NUM_TAILS
		return "Tails";
	}
	else
	{
		NUM_HEADS++; // Increment NUM_HEADS
		return "Heads";
	}
}
 
int main ()
{
	int num;
	srand (time(NULL)); // Seed for random number generation
	cout << setprecision(2); // Output formatting
	
	cout << "Enter the number of tosses: ";
	cin >> num;
	while (num <= 0) // Input validation
	{
		cout << "ERROR: Input must be positive." << endl;
		cout << endl << "Enter the number of tosses: ";
		cin >> num;
	}

	for(int i = 0; i < num; i++) // Output for all tosses
	{
		cout << setw(7) << left << (i+1) << setw(9) << BinaryFlip(); // Output trial #, then BinaryFlip (Heads or Tails)
		cout << "P(H) = " << setw(8) << (static_cast<double>(NUM_HEADS)/NUM_TOSSES); // Calculating and outputting probability of heads
		cout << "P(T) = " << (static_cast<double>(NUM_TAILS)/NUM_TOSSES) << endl; // Calculating and outputting probability of tails
	}
	
	return 0;
}
