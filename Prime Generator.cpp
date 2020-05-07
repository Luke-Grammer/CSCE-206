//Luke Grammer
//Prime Number Generator
//(Because class can be boring)

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
	bool isTrue;
	int mod, userInput;
	int temp = userInput;
	int lengthCount = 0;

	cout << "Welcome to Luke's prime number generator!\n";
	cout << "This generator will determine and display all primes from 1 to n.\n";
	cout << "Please type your n as an integer or type a negative to quit.\n";
	cout << "n = ";
	cin >> userInput;
	
	int temp = userInput;
	int lengthCount = 0;
	for(; temp != 0; temp /= 10, lengthCount++);
	
	if (userInput < 0)
	return 0;
	
	int primes[userInput];
	for (int j = 0; j < userInput; j++)
	primes[j] = 0;
	
	for (int num = 1; num <= userInput; num++)
	{
		isTrue = true;
		
		if ((num % 2 == 0) && (num != 2))
		isTrue = false;
		
		else 
		{
		for (int divisor = 2; divisor*divisor <= num; divisor++)
			{
			if (divisor*divisor == num)
				isTrue = false;
			
		 	else 
			 	mod = num % divisor;
		 	
		 	if(mod == 0) 
				isTrue = false;	
			}
		}
		
		if (isTrue == true)
		{
		for (int i = 0; i < num; i++ )
			if (primes[i] == 0)	
			{
				primes[i] = num;
				break;
			}
		}
	}
		
	for (int i = 0; i < userInput; i++)
	if (primes[i] != 0)
	{
		if (i % 19 == 0)
		cout << endl;
		cout << " " << setw(lengthCount) << primes[i];
	}

	else 
	{
		cout << "\n";
		break;	
	}
	
	return(0);
}
