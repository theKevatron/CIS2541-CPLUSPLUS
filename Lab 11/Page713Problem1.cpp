//Name: Kevin Morales
//Problem: 1
//Page: 713
//File Head Program
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	//Declare necessary variables
	//"fileName" used to store user input / file name
	string fileName;
	//"inFile" used as input file
	ifstream inFile;
	//"line" used to store string at a certain line of the file
	string line;
	//"totalLines" is used to keep count of how many lines are in the file, later used to determine what message to display
	int totalLines = 0;

	//Defining user input
	cout << "Please enter the name of the file: ";

	//Gathering user input
	getline(cin, fileName);

	//Open file
	inFile.open(fileName);

	//Check to see if file is open
	if (inFile)
	{
		cout << "File is open." << endl;
		//While loop to increment counter and count how many lines are in the file
		while (!inFile.eof())
		{
			getline(inFile, line);
			totalLines++;
		}
	}
	//Display error message if file is not open
	else
	{
		cout << "File not open." << endl;
		return 0;
	}
	inFile.close();

	//If statement to run if the total number of lines in the file is under 10
	if (totalLines < 10)
		{
		//Open file
		inFile.open(fileName);
		//Check to see if file is open
		if (inFile)
		{
			cout << "Entire file being displayed: " << endl;
			cout << endl;
			while (!inFile.eof())
			{
				getline(inFile, line);
				cout << line << endl;
			}
		}
	}
	//Else statement to run if the total number of lines in the file is over 10
	else
	{
		//Open file
		inFile.open(fileName);
		//Check to see if file is open
		if (inFile)
		{
			cout << "File Head(First 10 lines of file):  " << endl;
			cout << endl;
			//For loop to print first 10 lines of file
			for (int i = 0; i < 10; i++)
			{
				getline(inFile, line);
				cout << line << endl;
			}
		}
	}
	//Close file
	inFile.close();
	return 0;
}


/*
Please enter the name of the file: testFile5.txt
File is open.
Entire file being displayed:

Strawberries
Blueberries
Spinach
Kale
Carrots


F:\SCHOOL\CIS 2541(C++)\Page713Problem1\Debug\Page713Problem1.exe (process 23888) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .



Please enter the name of the file: testFile12.txt
File is open.
File Head(First 10 lines of file):

Strawberries
Blueberries
Spinach
Kale
Carrots
Nectarines
Apples
Grapes
Peaches
Cherries

F:\SCHOOL\CIS 2541(C++)\Page713Problem1\Debug\Page713Problem1.exe (process 20064) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/