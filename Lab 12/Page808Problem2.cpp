//Name: Kevin Morales
//Problem: 2
//Page: 808
//Employee Class
#include <iostream>
#include <string>
#include "Page808Problem2.h"

using namespace std;

int main() 
{
	//Store Employee 1 information
	Employee One;
	One.setName("Susan Meyers");
	One.setID(47899);
	One.setDepartment("Accounting");
	One.setPosition("Vice President");
	//Store Employee 2 information
	Employee Two;
	Two.setName("Mark Jones");
	Two.setID(39119);
	Two.setDepartment("IT");
	Two.setPosition("Programmer");
	//Store Employee 3 information
	Employee Three;
	Three.setName("Joy Rogers");
	Three.setID(81774);
	Three.setDepartment("Manufacturing");
	Three.setPosition("Engineer");


	//Display Employee 1 information
	cout << "Name:       " << One.getName() << endl;
	cout << "ID:         " << One.getID() << endl;
	cout << "Department: " << One.getDepartment() << endl;
	cout << "Position:   " << One.getPosition() << endl;
	cout << endl;
	//Display Employee 2 information
	cout << "Name:       " << Two.getName() << endl;
	cout << "ID:         " << Two.getID() << endl;
	cout << "Department: " << Two.getDepartment() << endl;
	cout << "Position:   " << Two.getPosition() << endl;
	cout << endl;
	//Display Employee 3 information
	cout << "Name:       " << Three.getName() << endl;
	cout << "ID:         " << Three.getID() << endl;
	cout << "Department: " << Three.getDepartment() << endl;
	cout << "Position:   " << Three.getPosition() << endl;

	return 0;
}

/*
Name:       Susan Meyers
ID:         47899
Department: Accounting
Position:   Vice President

Name:       Mark Jones
ID:         39119
Department: IT
Position:   Programmer

Name:       Joy Rogers
ID:         81774
Department: Manufacturing
Position:   Engineer

F:\SCHOOL\CIS 2541(C++)\Page808Problem2\Debug\Page808Problem2.exe (process 9488) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/