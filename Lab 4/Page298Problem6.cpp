// Name: Kevin Morales
// Problem: 6
// Page: 298
// Distance Traveled
#include <iostream>

using namespace std;

int main()
{
	//Declare variables
	int distance, speed, time;

	//Gather input
	cout << "Enter the speed of the vehicle in MPH(miles per hour): ";
	cin >> speed;

	cout << "Enter the number of hours the vehicle has traveled: ";
	cin >> time;

	//If statements to deny certain inputs
		if (speed < 0)
		{
			cout << "Speed attribute must be a positive number." << endl;
			cin.ignore(100);
		}

		if (time < 1)
		{
			cout << "Cannot accept time traveled less than 1 hour." << endl;
			cin.ignore(100);
		}

	//Display results
	cout << "Hour  Distance Traveled" << endl;
	cout << "=======================" << endl;

	//For loop to display distance traveled at hour intervals
	for (int i = 0; i < time; i++)
	{
		distance = (i+1) * speed;
		cout << " " << (i + 1) << "            " << distance << endl;
	}

	//end of program
	return 0;
}
/*
Enter the speed of the vehicle in MPH(miles per hour): -1
Enter the number of hours the vehicle has traveled: 3
Speed attribute must be a positive number.


Enter the speed of the vehicle in MPH(miles per hour): 5
Enter the number of hours the vehicle has traveled: 0
Cannot accept time traveled less than 1 hour.


Enter the speed of the vehicle in MPH(miles per hour): 29
Enter the number of hours the vehicle has traveled: 4
Hour  Distance Traveled
=======================
 1            29
 2            58
 3            87
 4            116

*/