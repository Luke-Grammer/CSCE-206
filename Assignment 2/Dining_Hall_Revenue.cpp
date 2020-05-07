// Program finds revenue of different meals plans given price and quantity sold
// Luke Grammer
// CSCE 206

#include<iostream>
#include<iomanip>

using namespace std;

const double ON_CAMPUS_PRICE = 125.75;
const double OFF_CAMPUS_PRICE = 570.25;

int main()
{
	string diningHall;
	int onCampusSold, offCampusSold;
	double onCampusRevenue, offCampusRevenue, totalRevenue;

	cout << "Dining Hall Software v1.0\n";
	cout << "\nEnter the name of the dining hall: ";
	getline (cin, diningHall);
	
	cout << "\nEnter number of on-campus meal plans sold: ";
	cin >> onCampusSold;
	
	cout << "\nEnter number of off-campus meal plans sold: ";
	cin >> offCampusSold;
	
	onCampusRevenue = onCampusSold * ON_CAMPUS_PRICE;
	offCampusRevenue = offCampusSold * OFF_CAMPUS_PRICE;
	totalRevenue = onCampusRevenue + offCampusRevenue;
	
	cout << fixed << setprecision (2) << showpoint;
	cout << "\nDining Hall Name: " << setw(42) << diningHall;
	cout << "\nOn-campus meal plans sold: " << setw(33) << onCampusSold;
	cout << "\nOff-campus meal plans sold: " << setw(32) << offCampusSold;
	cout << "\nRevenue from On-campus meal plans: " << setw(25) << onCampusRevenue;
	cout << "\nRevenue from Off-campus meal plans: " << setw(24) << offCampusRevenue;
	cout << "\nTotal Revenue earned from meal plans: " << setw(22) << totalRevenue << endl; 
	
	return 0;
}
