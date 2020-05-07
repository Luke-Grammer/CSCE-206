// Program creates a random N-digit PIN number and allows the user to guess it, giving helpful infomation after each guess
// Luke Grammer
// CSCE 206

#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;

const int SIZE = 5; // 'SIZE' indicates number of digits in combination

int RandomInt(int max, int min = 0){ // Generates a random number between 'max' and 'min'
	return (rand() % (max - min + 1)) + min;
}
 
int main (){
	int PIN[SIZE], GuessedPIN[SIZE], isMatch = 0; // Initializing variables
	
	srand(time(NULL)); // Seeding random number generation
	for (int i = 0; i < SIZE; i++){
		PIN[i] = RandomInt(9); // Generate SIZE random numbers between 9 and 0
	}
	
	cout << "Guess the PIN v1.0" << endl;
	cout << endl << "Welcome, hacker;" << endl; // Display input prompt 
	cout << "Enter your guess (5 integers between 0 and 9)" << endl;
	for (int i = 0; i < SIZE; i++){
		cin >> GuessedPIN[i]; // Input
		while (GuessedPIN[i] < 0 || GuessedPIN[i] > 9){ // Input validation
			cout << "ERROR: Guess must be between 0 and 9" << endl << endl;
			cin >> GuessedPIN[i];
		}
	}
	
	cout << endl << "PIN: "; // Display contents of true pin
	for (int i = 0; i < SIZE; i++){
		cout << PIN[i] << " "; 
	}
	
	cout << endl << "Guessed PIN: "; // Display contents of pin guessed by user
	for (int i = 0; i < SIZE; i++){
		cout << GuessedPIN[i] << " ";
	}
	
	for (int i = 0; i < SIZE; i++){
		if (PIN[i] == GuessedPIN[i]){ // Which elements match and where?
			cout << endl << "Array element " << i << " (value: " << PIN[i] << ") matches";
			isMatch++;
		}
	}
	
	cout << endl << endl << "There are in total " << isMatch << " matching digit(s)"; // Total number of matching digits displayed
	
	cout << endl;
	if (isMatch == 5){
		cout << endl << "Password Hacked!" << endl; // Display 'Password Hacked!' if all digits match 
	}
	
	return 0;
}
