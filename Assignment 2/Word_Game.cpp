// Program fills out a 'mad-libs' style story with provided user input
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	string name, city, college, profession, animal, pet;
	int age;

	cout << "Word game v1.0\n";
	
	cout << "\nPlease enter a name: ";
	getline (cin, name);
	
	cout << "\nPlease enter an age: ";
	cin >> age;
	cin.ignore();
	
	cout << "\nPlease enter the name of a city: ";
	getline (cin, city);
	
	cout << "\nPlease enter the name of a college: ";
	getline (cin, college);
	
		if (college == "Texas A&M University" || college == "A&M" || college == "Texas A&M")
			cout << "\nWhoop!\n";
		else if (college == "Texas University" || college == "TU")
			cout << "\nHiss!\n";
	
	cout << "\nPlease enter a profession: ";
	getline (cin, profession);
	
	cout << "\nPlease enter a type of animal: ";
	getline (cin, animal);
	
	cout << "\nPlease enter the name of a pet: ";
	getline (cin, pet);
	
	cout << "\n\nThere once was a person named " << name << " who lived in " << city << ". ";
	cout << "At the age of " << age << ", " << name << " went to " << endl << "college at " << college << ". ";
	cout << name << " graduated and went to work as a " << profession << ". Then, " << name << endl;
	cout << "adopted a " << animal << " named " << pet << ". They both lived happily ever after!" << endl;
	cout << endl;
	
	return 0;
}
