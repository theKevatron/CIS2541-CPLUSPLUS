//Name: Kevin Morales
//Problem: 2
//Page: 808
//Employee Class
#pragma once

#include <iostream>
#include <string>

using namespace std;

//Employee Class
class Employee 
{
private:
	//Member variables
	//Stores "name" value for object
	string name;
	//Stores "idNumber" value for object
	int idNumber;
	//Stores "department" value for object
	string department;
	//Stores "postion" value for object
	string position;

public:
	//Constructors
	//Constructor that accepts all arguments
	Employee(string n, int i, string d, string p)
	{
		setName(n);
		setID(i);
		setDepartment(d);
		setPosition(p);
	}
	//Constructor that accepts name and ID and assigns default to department and position
	Employee(string n, int i)
	{
		setName(n);
		setID(i);
		department = " ";
		position = " ";
	}
	//Constructor that assigns default values to all variables
	Employee()
	{
		name = " ";
		idNumber = 0;
		department = " ";
		position = " ";
	}

	//Mutator Functions
	//Assigns value to "name" variable for object when called
	void setName(string);
	// Assigns value to "idNumber" variable for object when called
	void setID(int);
	// Assigns value to "department" variable for object when called
	void setDepartment(string);
	// Assigns value to "position" variable for object when called
	void setPosition(string);

	//Accessor Functions
	//Returns value stored in "name" variable for object when called
	string getName() { return name; }
	//Returns value stored in "idNumber" variable for object when called
	int getID() const { return idNumber; }
	//Returns value stored in "department" variable for object when called
	string getDepartment() { return department; }
	//Returns value stored in "position" variable for object when called
	string getPosition() { return position; }
};


//Mutator Functions
//Assigns value to "name" variable for object when called
void Employee::setName(string n) 
{
	name = n;
}
// Assigns value to "idNumber" variable for object when called
void Employee::setID(int i)
{
	idNumber = i;
}
// Assigns value to "department" variable for object when called
void Employee::setDepartment(string d)
{
	department = d;
}
// Assigns value to "position" variable for object when called
void Employee::setPosition(string p)
{
	position = p;
}