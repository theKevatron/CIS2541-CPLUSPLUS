//Name: Kevin Morales
//Problem: 1
//Page: 499
//Charge Account Validation
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//Function to linear search an array
//Array, target, size of array
void seqSearch(int[], int, int);

int main()
{
	//Declare the nexessary variables
	//Variable to store user input to test against array
	int userNumber;

	//Variable to store size of array
	const int SIZE = 18;
	//Array of charge account numbers
	int arr[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	//Gather user input
	cout << "Please enter a charge account number: ";
	cin >> userNumber;

	//Call sequential search function
	seqSearch(arr, userNumber, 18);

	//End
	return 0;
}

void seqSearch(int arr[], int target, int size) 
{
	//For loop to test the array for the number stored in user input variable
	for (int i = 0; i < size; i++) 
	{
		//If statement for if the number is found
		if (arr[i] == target)
		{
			cout << "The charge account number is valid." << endl;
			exit(1);
		}
	}
	//Error message for if the number is not found
	cout << "The charge account number is invalid." << endl;
}

/*
Please enter a charge account number: 8080151
The charge account number is invalid.

F:\SCHOOL\CIS 2541(C++)\Page499Problem1\Debug\Page499Problem1.exe (process 17468) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .



Please enter a charge account number: 8080152
The charge account number is valid.

F:\SCHOOL\CIS 2541(C++)\Page499Problem1\Debug\Page499Problem1.exe (process 1876) exited with code 1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/