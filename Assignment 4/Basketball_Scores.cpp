// Program reads input file of basketball scores, then displays information about win/loss records
// Luke Grammer
// CSCE 206

#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;



int main()
{
	int score1, score2; // Declaring variables.
	int winSum = 0, totalSum1 = 0, totalSum2 = 0, loseSum = 0;

	ifstream infile; // Creating input stream to 'infile'.
	infile.open("bballscores.txt"); // Opening/creating 'infile'.
	if (!infile)
	{
		cout << "ERROR: Could not open bballscores.txt!\n";
		return 1; // Return an error if infile could not be opened.
	}
	
	cout << "A&M Basketball Scores v1.0" << endl << endl;
	
	while (infile >> score1 >> score2)
	{
		totalSum1 += score1; // Sum A&M scores.
		totalSum2 += score2; // Sum opponent scores.
		
		if (score1 > score2) // If A&M won.
		{
			winSum += 1; // Add 1 to wins.
		}
		else  // if opponent won.
		{
			loseSum += 1; // Add 1 to losses.
		}
	}
	
	cout << "A&M's record was " << winSum << "-" << loseSum; // Output of wins and losses.
	cout << " with a point differential of " << abs(totalSum1 - totalSum2) << endl; // Output of point differential.

	infile.close(); // Closing infile.
	return 0;
}
