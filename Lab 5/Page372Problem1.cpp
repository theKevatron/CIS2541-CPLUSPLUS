//Name: Kevin Morales
//Problem: 1
//Page: 372
//Markup
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//declare the function before main function
float calculateRetail();

int main()
{
	//Declare the necessary variable
	float retailPrice;

	//Set variable equal to the value that "calculateRetail" returns
	retailPrice = calculateRetail();

	//Print/display the retail price
	cout << fixed << setprecision(2) << "The retail price is: $" << retailPrice << endl;

	//End
	return 0;
}

float calculateRetail()
{
	//Declare the necessary variables for the function
	//Variable used to store wholesale cost(input value)
	float cost;
	//Variable used to store markup percentage(input value)
	float markupPercent;
	//Variable used to store markup percentage as a decimal value, used to calculate newPrice
	float markupDecimal;
	//Variable used to store the new price
	float newPrice;

	//Define user input and store input in variable "cost"
	cout << "Enter the wholesale cost: ";
	cin >> cost;

	//While loop to reject negative values for wholesale cost from user and to display error message
	while (cost < 0)
	{
		cout << "Negative values for the wholesale cost are not accepted. Please enter a positive number." << endl;
		cout << "Try Again: ";
		cin >> cost;
	}

	//Define user input and store input in variable "markupPercent"
	cout << "Enter the markup percentage: ";
	cin >> markupPercent;

	//While loop to reject negative values for markup percentage from user and to display error message
	while (markupPercent < 0)
	{
		cout << "Negative values for the markup percentage are not accepted. Please enter a positive number." << endl;
		cout << "Try Again: ";
		cin >> markupPercent;
	}

	//Equation to calculate markup percentage in decimal form
	markupDecimal = markupPercent / 100;

	//Equation to calculate the new/retail price using cost and markup percentage in decimal form
	newPrice = (cost * markupDecimal) + cost;

	//Returns value
	return newPrice;
}
/*
Enter the wholesale cost: 15
Enter the markup percentage: 34
The retail price is: $20.10

F:\SCHOOL\CIS 2541(C++)\Page372Problem1\Debug\Page372Problem1.exe (process 17804) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .




Enter the wholesale cost: 88
Enter the markup percentage: 22
The retail price is: $107.36

F:\SCHOOL\CIS 2541(C++)\Page372Problem1\Debug\Page372Problem1.exe (process 10364) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .




Enter the wholesale cost: -10
Negative values for the wholesale cost are not accepted. Please enter a positive number.
Try Again: 1000
Enter the markup percentage: -1
Negative values for the markup percentage are not accepted. Please enter a positive number.
Try Again: 10
The retail price is: $1100.00

F:\SCHOOL\CIS 2541(C++)\Page372Problem1\Debug\Page372Problem1.exe (process 8012) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/