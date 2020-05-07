// Program generates random scores for two football teams in the range [10, 100]
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int score1, score2;

	srand (time(NULL));
	score1 = (rand() % 91) + 10;
	score2 = (rand() % 91) + 10;
	
	cout << "Prediction Machine v1.0\n";
	cout << "\nGetting score for Texas A&M...\n";
	cout << "\nPress enter to continue...";
	cin.get();
	cout << "\n" << score1 << "\n";
	
	cout << "\nGetting score for Alabama...\n";
	cout << "\nPress enter to continue...";
	cin.get();
	cout << "\n" << score2 << "\n";
	
	return 0;
}
