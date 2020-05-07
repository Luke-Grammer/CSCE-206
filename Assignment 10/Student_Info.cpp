// Program creates a vector of student objects, collecting information from user about each student, then displays a table of students
// Luke Grammer
// CSCE 206

#include <iostream>
#include <vector>

using namespace std;

struct StudentRecord {
	string stdName;
	string stdMajor;
	unsigned int stdUIN;	
	unsigned int stdYear;
	unsigned int stdTotalCredits;
	unsigned int stdCreditsCompleted;
};

int monthsBeforeGraduation(int totalCredits, int creditsCompleted){
	return ((totalCredits - creditsCompleted) * 6) / 10;
}

int main(){
	int size;
	vector<StudentRecord> studentRecord;
	cout << endl << "Enter the number of students you would like to add data for: ";
	cin >> size;
	cin.ignore();
	while (size < 0){
		cout << "ERROR: Number must be greater than or equal to zero!";
		cout << "Enter the number of students you would like to add data for: ";
		cin >> size;
	}
	
	for (int i = 0; i < size; i++){	
		studentRecord.push_back(StudentRecord());
		cout << "Enter student " << i + 1 << "'s name: ";
		getline(cin, studentRecord[i].stdName);
		
		cout << "Enter " << studentRecord[i].stdName << "'s UIN: ";
		cin >> studentRecord[i].stdUIN;
		cin.ignore();
		
		cout << "Enter " << studentRecord[i].stdName << "'s major: ";
		getline(cin, studentRecord[i].stdMajor);
		
		cout << "Enter " << studentRecord[i].stdName << "'s class year: ";
		cin >> studentRecord[i].stdYear;
		
		cout << "Enter " << studentRecord[i].stdName << "'s total credits required for graduation: ";
		cin >> studentRecord[i].stdTotalCredits;
		
		cout << "Enter " << studentRecord[i].stdName << "'s credits completed: ";
		cin >> studentRecord[i].stdCreditsCompleted;
		cin.ignore();
		cout << endl;
	}
	
	for (int i = 0; i < size; i++){
		cout << " ---- STUDENT " << i + 1 << " ----" << endl;
		cout << "Name    : " << studentRecord[i].stdName << endl;
		cout << "UIN     : " << studentRecord[i].stdUIN << endl;
		cout << "Major   : " << studentRecord[i].stdMajor << endl;
		cout << "Class Year: " << studentRecord[i].stdYear << endl;
		cout << "Total credit: " << studentRecord[i].stdTotalCredits << endl;
		cout << "Total credits completed: " << studentRecord[i].stdCreditsCompleted << endl;
		cout << "Approximate number of months remaining before graduation: " << monthsBeforeGraduation(studentRecord[i].stdTotalCredits, studentRecord[i].stdCreditsCompleted); 
		cout << endl << endl;
	}
	
	return 0;
}


