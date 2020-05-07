// Program creates a reciept from an input file and displays various statistics
// Luke Grammer
// CSCE 206

#include<iostream>
#include<fstream>
#include<limits>

using namespace std;

int main()
{
	int price, prevPrice, sum = 0, i = 1; // Declaring variables.
	int largest = numeric_limits<int>::min(), smallest = numeric_limits<int>::max(); // Assigning 'largest' and 'smallest' to the smallest and largest values an int can hold, respectively.

	ofstream outfile; // Creating output stream to 'outfile'.
	outfile.open("receipt.txt"); // Opening/creating 'outfile'.
	
	if (!outfile)
	{
		cout << "ERROR: Could not open receipt.txt!\n" << endl;
		return 1; // Return an error if outfile could not be opened.
	}
	
	cout << "Reciept Creator v1.0\n\n";
	
	while (price != -101) // A 'for' loop would also work here.
	{
		cout << "Enter the cost of item " << i << ": ";
		cin >> price;

		if (price != -101)
		{
			sum += price; // add 'price' to 'sum'.
			
			if (price < smallest)
			smallest = price; // Is 'price' new smallest?
		
			if (price > largest)
			largest = price; // Is 'price' new largest?
		
			outfile << "Item " << i << " $" << price << "\n"; // Writing cost of indvidual items to outfile.
		}

		i++; // Increment index variable
	}
	
	outfile << "\nTotal: $" << sum << "\n"; // Writing total cost to outfile.
	outfile << "The Smallest Price: $" << smallest << "\n"; // Writing smallest price to outfile.
	outfile << "The Largest Price: $" << largest << "\n"; // Writing largest price to outfile.

	outfile.close(); // Closing outfile.
	return 0;
}
