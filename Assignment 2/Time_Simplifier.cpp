// Program simplifies and displays a time given in seconds
// Luke Grammer
// CSCE 206

#include<iostream>

using namespace std;

int main()
{
	int seconds, tempseconds, minutes = 0, hours = 0, days = 0;
 	bool error = true;

	while (error == true)
	// Prompts user for input and will continue to prompt if number is not positive.
	{
		cout << "\nPlease input number of seconds: ";
		cin >> seconds;
	
		if (seconds <= 0)
			cout << "\nInput cannot be less than or equal to zero, please try again.\n";
		else 
			error = false; 
	}
	
	tempseconds = seconds;
		
	while ((tempseconds / 86400) >= 1)
	// Determines number of even days that will fit in seconds given
	{
		days++;
		tempseconds -= 86400;
	}
		
	while ((tempseconds / 3600) >= 1)
	// Determines number of even hours in leftovers from days
	{
		hours++;
		tempseconds -= 3600;
	}
		
	while ((tempseconds / 60) >= 1)
	// Determines number of even minutes in leftovers from hours
	{
		minutes++;
		tempseconds -= 60;
	}
	
	cout  << "\n" << seconds << " second" << (seconds > 1) ? "s " : " " << "= "; // outputs second(s)
	
	if (days != 0)
		cout << days << " day" << (days > 1) ? "s " : " "; // outputs day(s)
	
	if (hours != 0)
		cout << hours << " hour" << (hours > 1) ? "s " : " "; // outputs hour(s)
	
	if (minutes != 0)
		cout << minutes <<  " minute" << (minutes > 1) ? "s " : " "; // outputs minute(s)
				
	if (seconds != 0)
		cout << tempseconds << " second" << (tempseconds > 1) ? "s " : " " << "\n"; // outputs tempsecond(s) and newline
	return 0;
}
