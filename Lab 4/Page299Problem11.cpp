// Name: Kevin Morales
// Problem: 11
// Page: 299
// Population
#include <iostream>

using namespace std;

int main()
{
	//Declare variables
	int size, days;
	float rate;

	//Gather input
	cout << "Enter the number of starting organisms: ";
	cin >> size;

	cout << "Enter the average daily population increase(as a percentage):  ";
	cin >> rate;

	cout << "Enter the number of days they will multiply: ";
	cin >> days;


	//calculation
	rate = rate / 100;

	//If statements to deny certain inputs
	if (size < 2)
	{
		cout << "Cannot accept a starting population size lower than 2." << endl;
		return 0;
	}

	if (rate < 0)
	{
		cout << "Can only accept a positive number for the average daily population increase." << endl;
		return 0;
	}

	if (days < 1)
	{
		cout << "Cannot accept a number less than 1 for the number of days they will multiply." << endl;
		return 0;
	}

	//Display results
	cout << "     Population Chart     " << endl;
	cout << "==========================" << endl;
	cout << "Day #           Population" << endl;

	//For loop to display distance traveled at hour intervals
	for (int i = 1; i < days+1 ; i++)
	{
		cout << "    " << i << "                 " << size << endl;
		size = size + (size * rate);
	}

	//end of program
	return 0;
}
/*
Ex 1:
Enter the number of starting organisms: 0
Enter the average daily population increase(as a percentage):  25
Enter the number of days they will multiply: 10
Cannot accept a starting population size lower than 2.

C:\Users\Shyto\source\repos\Page299Problem11\Debug\Page299Problem11.exe (process 6228) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

 
Ex 2:
Enter the number of starting organisms: 1000
Enter the average daily population increase(as a percentage):  -10
Enter the number of days they will multiply: 10
Can only accept a positive number for the average daily population increase.

C:\Users\Shyto\source\repos\Page299Problem11\Debug\Page299Problem11.exe (process 15976) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .


Ex 3:




Enter the number of starting organisms: 1000
Enter the average daily population increase(as a percentage):  25
Enter the number of days they will multiply: 10
     Population Chart
==========================
Day #           Population
    1                 1000
    2                 1250
    3                 1562
    4                 1952
    5                 2440
    6                 3050
    7                 3812
    8                 4765
    9                 5956
   10                 7445

C:\Users\Shyto\source\repos\Page299Problem11\Debug\Page299Problem11.exe (process 9088) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/