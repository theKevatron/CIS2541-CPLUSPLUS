//Name: Kevin Morales
//Problem: 6
//Page: 500
//String Selection Sort
#include <iostream>
#include <string>

using namespace std;

//Declare function selectionSort
void selectionSort(string[], int);

int main()
{
	//Declare the necessary variables
	//Variable to store size of array
	const int NUM_NAMES = 20;
	//Array of names
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim", 
								"Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
								"Taylor, Terri", "Johnson, Jill", 
								"Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
								"James, Jean", "Weaver, Jim", "Pore, Bob", 
								"Rutherford, Greg", "Javens, Renee", 
								"Harrison, Rose", "Setzer, Cathy", 
								"Pike, Gordon", "Holland, Beth" };
	
	//Call selection sort function
	selectionSort(names, NUM_NAMES);

	//For loop to display array (after sort has occured)
	for (int i = 0; i < NUM_NAMES; i++)
	{
		cout << names[i] << endl;
	}

	//End
	return 0;
}

//Function to selection sort an array of strings
void selectionSort(string array[], int NUM_NAMES)
{
	//Declare the necessary variables
	int start, minIndex;
	string minValue;

	//For loop to keep finding min value and to swap every iteration
	for (start = 0; start < (NUM_NAMES - 1); start++)
	{
		//Declare the necessary variables
		minIndex = start;
		minValue = array[start];

		//For loop to find the lowest value
		for (int index = start + 1; index < NUM_NAMES; index++)
		{
			//If statement to run when a new minimum value is found
			if (array[index] < minValue)
			{
				//Set new minimum value equal to value at array[index]
				minValue = array[index];
				//Set minimum index equal to index we are currently on
				minIndex = index;
			}
		}
		//Call function to swap positions of values at "minIndex" and "start"
		swap(array[minIndex], array[start]);
	}
}


/*
Allen, Jim
Allison, Jeff
Collins, Bill
Griffin, Jim
Harrison, Rose
Holland, Beth
James, Jean
Javens, Renee
Johnson, Jill
Looney, Joe
Pike, Gordon
Pore, Bob
Rose, Geri
Rutherford, Greg
Setzer, Cathy
Smith, Bart
Stamey, Marty
Taylor, Terri
Weaver, Jim
Wolfe, Bill

F:\SCHOOL\CIS 2541(C++)\Page500Problem6\Debug\Page500Problem6.exe (process 17904) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/