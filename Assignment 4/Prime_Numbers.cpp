// Program takes input file of numbers, determines if each of them is prime, then prints the smallest and largest primes.
// Luke Grammer
// CSCE 206

#include<iostream>
#include<fstream>
#include<limits>

using namespace std;


int main()
{
	string filename;
	bool test, repeat;
	int num; // Declaring variables.
	int largest = numeric_limits<int>::min(), smallest = numeric_limits<int>::max(); // Assigning 'largest' and 'smallest' to the smallest and largest values an int can hold, respectively.

	cout << "Prime Numbers v1.0\n";
	ifstream infile; // Creating input stream to infile.
	
	do
	{
		cout << "\nPlease enter a filename: ";
		cin >> filename;
		repeat = false;
	
		infile.open(filename.c_str()); // Opening infile.
		if (!infile)
		{
			cout << "ERROR: Could not open " << filename << ", please try again.\n"; // Return an error if infile could not be opened.
			repeat = true; // Repeat 'while' loop
		}
	} while (repeat == true);
	
	cout << "Prime numbers: "; // Beginning output.
	
	while (infile >> num)
	{
		test = true;
		
		if (num == 1) // One is neither prime nor composite.
			test = false;
		
		if ((num % 2 == 0) && (num != 2)) // If number is divisible by two and NOT equal to 2, then it is not prime (saves memory by skipping 'for' loop)
			test = false;
		else 
		{
			for (int divisor = 2; divisor*divisor <= num; divisor++) // While the index squared is less than num (making conditional 'divisor < num' is also viable, but much less efficient).
			{
				if (divisor*divisor == num) // If sqrt(num) is an integer, it is not prime.
					test = false;
				else 
				{
					if ((num % divisor) == 0) // If the modulus of num and an integer greater than one but less than num is zero, num is not prime.
						test = false;
				}
			}
		}
		
		if (test == true) // If num is prime.
		{
			cout << num << " ";  // Print number.
			
			if (num < smallest) // Is num the smallest prime?
				smallest = num;
		
			if (num > largest) // Is num the largest prime?
				largest = num;
		} 
	}
	
	cout << endl;
	cout << "The biggest prime number is " << largest << endl; // Print largest prime.
	cout << "The smallest prime number is " << smallest << endl; // Print smallest prime.

	infile.close(); // Closing infile.
	return 0;
}
