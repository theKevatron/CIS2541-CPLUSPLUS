//Name: Kevin Morales
//Problem: 13
//Page: 376
//Days Out
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//declare the function before main function
int numberOfEmployees();
int individualAbsentDays(int);
double averageDaysAbsent(int, int);

int main()
{
	//Declare the necessary variables to store return values from functions
	int numberEmployed;
	int totalDaysMissed;
	double averageDaysMissed;

	//Call fucntion "numberOfEmployees" to calculate the total number of employees
	numberEmployed = numberOfEmployees();

	//Call fucntion "individualAbsentDays" to calculate the total number of days missed by all employees
	totalDaysMissed = individualAbsentDays(numberEmployed);

	//Call fucntion "averageDaysAbsent" to calculate the average number of days absent for all employees
	averageDaysMissed = averageDaysAbsent(numberEmployed, totalDaysMissed);

	//Display the average number of days missed
	cout << "Average number of days missed: " << averageDaysMissed << endl;
	
	//End
	return 0;
}

//Function to calculate the average number of days missed by each employee using the total days missed and the number of employees
double averageDaysAbsent(int totalEmployed, int allDaysMissed)
{
	//Declare variables for arguements
	double t = totalEmployed;
	double a = allDaysMissed;
	double average;

	//Equation to calculate the average number of days missed by each employee
	average = allDaysMissed / totalEmployed;

	//Return value
	return average;
}

//Function to gather input on and calculate the total number of days missed by all employees
int individualAbsentDays(int Employed) 
{
	//Declare necessary variables for function
	int e = Employed;
	int daysMissed;
	int total = 0;

	//For loop to count gather input for how many days each employee missed
	for (int i = 0; i < e; i++)
	{
		//Gather user input and store in daysMissed
		cout << "Please enter the number of days this employee missed." << endl;
		cout << "Employee " << (i + 1) << ": ";
		cin >> daysMissed;

		//While loop to reject negative values from user and to display error message
		while (daysMissed < 0)
		{
			cout << "Negative values are not accepted for the number of days missed. " << endl;
			cout << "Try Again: ";
			cin >> daysMissed;
		}
		//Equation to calculate total number of days missed by all employees
		total += daysMissed;
	}
	//Return value
	return total;
}

//Function to gather input on the total number of employees
int numberOfEmployees() 
{
	//Variable used to store number of employees
	int employees;

	//Define user input and store input in variable "employees"
	cout << "Enter the total number of employees in the company: ";
	cin >> employees;

	//While loop to reject values less than 1 from user and to display error message
	while (employees < 1)
	{
		cout << "Values less than 1 are not accepted for the number of employees. " << endl;
		cout << "Try Again: ";
		cin >> employees;
	}

	//Return value
	return employees;
}

/*
Enter the total number of employees in the company: 4
Please enter the number of days this employee missed.
Employee 1: 2
Please enter the number of days this employee missed.
Employee 2: 3
Please enter the number of days this employee missed.
Employee 3: 1
Please enter the number of days this employee missed.
Employee 4: 2
Average number of days missed: 2

F:\SCHOOL\CIS 2541(C++)\Page376Problem13\Debug\Page376Problem13.exe (process 10780) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .



Enter the total number of employees in the company: 0
Values less than 1 are not accepted for the number of employees.
Try Again: 4
Please enter the number of days this employee missed.
Employee 1: -1
Negative values are not accepted for the number of days missed.
Try Again: 2
Please enter the number of days this employee missed.
Employee 2: 2
Please enter the number of days this employee missed.
Employee 3: 2
Please enter the number of days this employee missed.
Employee 4: 2
Average number of days missed: 2

F:\SCHOOL\CIS 2541(C++)\Page376Problem13\Debug\Page376Problem13.exe (process 17196) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/