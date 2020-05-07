// Program generates a random number given a lower and upper bound
// Luke Grammer
// CSCE 206

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int GetRandomNumber(int, int); // Declaring function

int main()
{
	int n1, n2, nRand; // Declaring variables in 'main'
	char again;
	
	cout << "Magical Numbers v1.0" << endl;
	do
	{
		cout << "\nEnter the lower and upper bounds of the" << endl;
		cout << "random number, respectively, separated by a space: ";
		cin >> n1 >> n2;
	
		while ((n1 > n2) || (n1 < 0) || (n2 < 0))
		{
			cout << "\nERROR: The lower bound must be less than" <<endl;
			cout << "or equal to the upper bound, and both must be positive" << endl;
			cout << "\nEnter the lower and upper bounds of the" << endl;
			cout << "random number, respectively, separated by a space: ";
			cin >> n1 >> n2;
		}
	
		nRand = GetRandomNumber(n1,n2);
		cout << "The random number generated is " << nRand << endl;
		cout << "\nWould you like to generate a new number? (y/n): ";
		cin >> again;
	} while(again == 'Y' || again == 'y');
	
	return 0;
}

int GetRandomNumber(int n1, int n2)
{
	int nRand;
	srand (time(NULL));
	nRand = rand() % ((n2 - n1) + 1) + n1;
	return nRand;
}
