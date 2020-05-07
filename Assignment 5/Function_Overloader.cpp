// Basic exercise with function overloading, program subtracts two numbers of different types
// Luke Grammer
// CSCE 206

#include<iostream>

using namespace std;

float Subtract(float, float); // Function declarations
float Subtract(char, char);
float Subtract(int, float);
float Subtract(float, int);
float Subtract(int, char);
float Subtract(char, int);
float Subtract(int, int);

int main()
{
	int iresult, userInput, iparam1, iparam2; // Variable declarations within 'main'
	float fresult, fparam1, fparam2;
	char cparam1, cparam2;
	bool repeat = true;
	
	cout << "Function Overloader v1.0" << endl;
	do
	{
		cout << "--- Main Menu ---" << endl; // Displaying menu
		cout << "1. int, int" << endl;
		cout << "2. float, float" << endl;	
		cout << "3. char, char" << endl;
		cout << "4. int, float" << endl;
		cout << "5. float, int" << endl;
		cout << "6. int, char" << endl;
		cout << "7. char, int" << endl;
		cout << "8. Exit" << endl;
		cout << "\nPlease select an option: ";
		cin >> userInput;
		
		switch (userInput) // Interpreting menu choice
		{
			case 1: // If 'int, int'
				cout << "Enter the first integer: ";
				cin >> iparam1;
				cout << "Enter the second integer: ";
				cin >> iparam2;
				iresult = static_cast<int>(Subtract(iparam1,iparam2));
				cout << "The result is " << iresult << endl << endl; // Result as integer
				break;
				
			case 2: // If 'float, float'
				cout << "Enter the first float: ";
				cin >> fparam1;
				cout << "Enter the second float: ";
				cin >> fparam2;
				fresult = Subtract(fparam1,fparam2);
				cout << "The result is " << fresult << endl << endl; // Result as float
				break;
				
			case 3: // If 'char, char'
				cout << "Enter the first character: ";
				cin >> cparam1;
				cout << "Enter the second character: ";
				cin >> cparam2;
				iresult = static_cast<int>(Subtract(cparam1,cparam2)); // Result as integer
				cout << "The result is " << iresult << endl << endl;
				break;
				
			case 4: // If 'int, float'
				cout << "Enter the integer: ";
				cin >> iparam1;
				cout << "Enter the float: ";
				cin >> fparam2;
				fresult = Subtract(iparam1,fparam2);
				cout << "The result is " << fresult << endl << endl; // Result as float
				break;
				
			case 5: // If 'float, int'
				cout << "Enter the float: ";
				cin >> fparam1;
				cout << "Enter the integer: ";
				cin >> iparam2;
				fresult = Subtract(fparam1,iparam2);
				cout << "The result is " << fresult << endl << endl; // Result as float
				break;
				
			case 6: // If 'int, char'
				cout << "Enter the integer: ";
				cin >> iparam1;
				cout << "Enter the character: ";
				cin >> cparam2;
				iresult = static_cast<int>(Subtract(iparam1,cparam2)); // Result as integer
				cout << "The result is " << iresult << endl << endl;
				break;
				
			case 7: // If 'char, int'
				cout << "Enter the character: ";
				cin >> cparam1;
				cout << "Enter the integer: ";
				cin >> iparam2;
				iresult = static_cast<int>(Subtract(cparam1,iparam2)); // Result as integer
				cout << "The result is " << iresult << endl << endl;
				break;
				
			case 8: // If 'Exit'
				repeat = false;
				break;
				
			default: // If invalid input
				cout << "ERROR: Invalid input." << endl << endl;
				break;
		}
	} while (repeat == true);

	return 0;
}

/*FUNCTION DEFINITIONS*/

float Subtract(int param1, int param2)
{
	return (param1 - param2); 
}

float Subtract(float param1, float param2)
{
	return (param1 - param2); 
}

float Subtract(char param1, char param2)
{
	return (param1 - param2); 
}

float Subtract(int param1, float param2)
{
	return (param1 - param2);
}

float Subtract(float param1, int param2)
{
	return (param1 - param2);
}

float Subtract(int param1, char param2)
{
	return (param1 - param2);
}

float Subtract(char param1, int param2)
{
	return (param1 - param2);
}
