// Basic arithmetic calculator
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>

using namespace std;

void Add(), Subtract(), Multiply(); // Function declarations
bool Divide();
double getn1(), getn2();

int main()
{
	int choice; // Varaible declarations in main
	bool didDivide;
	char again;
	
	cout << "Basic Calculator v1.0" << endl;
	
	cout << fixed << showpoint << setprecision(2);
	
	do
	{
		cout << "\nOperations:" << endl; // Display menu
		cout << "1.\tAddition" << endl;
		cout << "2.\tSubraction" << endl;
		cout << "3.\tMultiplication" << endl;
		cout << "4.\tDivision" << endl;
		cout << "5.\tQuit" << endl;
	
		cout << "\nChoose an Operation: ";
		cin >> choice;
	
		switch (choice)
		{
			case 1:
			Add();
			break;
		
			case 2: 
			Subtract();
			break;
		
			case 3:
			Multiply();
			break;
		
			case 4:
			didDivide = Divide();
			if (didDivide == false)	// If Divide detected attempted division by zero
				cout << "ERROR: Cannot divide by zero!" << endl;
			break;
			
			case 5:
			return 0;
			
			default: // If invalid menu choice
			cout << "ERROR: Invalid menu choice!" << endl;
		}
		
		cout << "\nWould you like to perform another operation? (y/n): ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	
	return 0;
}

/*FUNCTION DEFINITIONS*/

double getn1()
{
	double n1;
	
	cout << "Enter the first number: ";
	cin >> n1;	
	return n1;
}

double getn2()
{
	double n2;
	
	cout << "Enter the second number: ";
	cin >> n2;
	return n2;	
}

void Add()
{
	double n1, n2, result;
	
	n1 = getn1();
	n2 = getn2();
	result = n1 + n2;
	cout << endl << n1 << " plus " << n2 << " is " << result << endl;
}

void Subtract()
{
	double n1, n2, result;
	
	n1 = getn1();
	n2 = getn2();
	result = n1 - n2;
	cout << endl << n1 << " minus " << n2 << " is " << result << endl;
}

void Multiply()
{
	double n1, n2, result;
	
	n1 = getn1();
	n2 = getn2();
	result = n1 * n2;
	cout << endl << n1 << " times " << n2 << " is " << result << endl;
}

bool Divide()
{
	double n1, n2, result;
	
	n1 = getn1();
	n2 = getn2();
	if (n2 == 0) // Catching division by zero
	{
		return false;
	}
	else // If n2 != 0
	{
		result = n1 / n2;
		cout << endl << n1 << " divided by " << n2 << " is " << result << endl;
		return true;
	}
}
