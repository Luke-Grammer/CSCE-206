// Program ouputs first 1000 multiples of four input numbers to file, and prints average
// Luke Grammer
// CSCE 206

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	double average; // Declaring variables.
	int number, nums[4], sum, multiple;

	ofstream outfile; // Creating output stream to 'outfile'.
	outfile.open("numbers.txt"); // Opening/creating 'outfile'.
	if (!outfile)
	{
		cout << "ERROR: Could not open numbers.txt!\n";
		return 1; // Return an error if outfile could not be opened.
	}
	
	cout << "Fun With Numbers v1.0\n\n";
	cout << "Enter 4 positive integers separated by a space: ";
	cin >> nums[0] >> nums[1] >> nums[2] >> nums[3]; 
	
	cout << "This may take a few moments..." << endl;
  
	for (int i = 0; i < 4; i++)
	{
		outfile << "Multiples of " << nums[i] << "\n";
		
		for  (int j = 0; j <= 1000; j++)
		{
			multiple = nums[i]*j;
			outfile << multiple << "\n"; // Writing first 1000 multiples of each of the 4 inputs to file sequentially on seperate lines.
			sum += multiple; // Adding that number to a sum.
		}
		
		outfile << "\n";
	}
	
	average = static_cast<double>(sum)/4000; // Finding average of 4000 numbers as a double.
	
	cout << "\nThe average of all numbers written to file is: " << average << endl;
	
	outfile.close(); // Closing outfile.
	return 0;
}
