#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int milesDriven;
	double costPerGallon;
	double tripCost;
	double newTripCost;
	const double INCREASE = 0.10;
	const int MILES_PER_GALLON = 20;

	cout << "Enter the number of miles driven :";
	cin >> milesDriven;
	
	while(milesDriven != 0)
	{
		cout << "\n* * * * *  Crunching the Numbers  * * * * *\n\n";
    
		cout << "Enter the current cost per gallon : $";
		cin >> costPerGallon;

		setprecision(2);
		tripCost = (milesDriven/MILES_PER_GALLON) * costPerGallon;
		cout << "\nTrip Cost : " << tripCost;
		newTripCost = tripCost *(1 + INCREASE);
		cout << newTripCost;
		cout << "\nNew Trip Cost : " << newTripCost;
		   
		cout << "\n\nEnter the number of miles driven or 0 to exit:";
		cin >> milesDriven;
		cout << "\nEnd of program";
		
    }
    
    return 0;
}