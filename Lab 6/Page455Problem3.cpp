//Name: Kevin Morales
//Problem: 3
//Page: 455
//Chips and Salsa
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Declare the necessary variables
	//Variable to store total sales
	int totalSales = 0;
	//Variable to store highest selling item
	int highIndex = 0;
	//Variable to store lowest selling item
	int lowIndex = 0;
	//Declare constant integer to be used for array size
	const int SIZE = 5;
	//Create string array for names of salsa
	string salsa[SIZE] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	//Create integer array to store number of jars sold for each salsa type
	int numberSold[SIZE];

	//For loop to gather user input for each spot in the array and calculate the total number of jars sold
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the number of jars sold for " << salsa[i] << " salsa in the past month: ";
		cin >> numberSold[i];
		while (numberSold[i] < 0)
		{
			cout << "Negative numbers are not accepted." << endl;
			cout << "Try again: ";
			cin >> numberSold[i];
		}
		//Equation to calculate the total sales
		totalSales += numberSold[i];
	}

	//For loop to find highest selling product
	for (int i = 1; i < SIZE; i++)
	{
		if (numberSold[i] > numberSold[highIndex])
		{
			//Set highIndex variable equal to the index of highest selling product
			highIndex = i;
		}
	}

	//For loop to find lowest selling product
	for (int i = 1; i < SIZE; i++)
	{
		if (numberSold[i] < numberSold[lowIndex])
		{
			////Set lowIndex variable equal to the index of lowest selling product
			lowIndex = i;
		}
	}

	//Header for printing array
	cout << "------------------------------------ " << endl;
	cout << "Salsa Type:               Jars Sold: " << endl;
	cout << "------------------------------------ " << endl;
	//For loop to print arrays
	for (int i = 0; i < SIZE; i++)
	{
		cout << salsa[i] << setw(31) << numberSold[i] << endl;
	}
	cout << "------------------------------------" << endl;
	//Print the total number of jars sold
	cout << "Total jars sold:                " << totalSales << endl;
	cout << "------------------------------------" << endl;
	//Print the index (location) of the highest selling product from the string array "salsa[]"
	cout << "Highest selling product:         " << salsa[highIndex] << endl;
	cout << "------------------------------------" << endl;
	//Print the index (location) of the lowest selling product from the string array "salsa[]"
	cout << "Lowest selling product:        "  << salsa[lowIndex] << endl;
	cout << "------------------------------------" << endl;

	//End
	return 0;
}

/*
Enter the number of jars sold for Mild salsa in the past month: 1225
Enter the number of jars sold for Medium salsa in the past month: 1943
Enter the number of jars sold for Sweet salsa in the past month: 1067
Enter the number of jars sold for Hot salsa in the past month: 2453
Enter the number of jars sold for Zesty salsa in the past month: 2098
------------------------------------
Salsa Type:               Jars Sold:
------------------------------------
Mild                            1225
Medium                          1943
Sweet                           1067
Hot                             2453
Zesty                           2098
------------------------------------
Total jars sold:                8786
------------------------------------
Highest selling product:         Hot
------------------------------------
Lowest selling product:        Sweet
------------------------------------

F:\SCHOOL\CIS 2541(C++)\Page455Problem3\Debug\Page455Problem3.exe (process 20396) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/