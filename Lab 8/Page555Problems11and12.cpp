//Name: Kevin Morales
//Problems: 11 and 12
//Page: 555
//Array Expander and Element Shifter
#include <iostream>

using namespace std;

//Declare functions
//Function to double array size and set the values in the new half equal to 0
int* arrayExpander(int[], const int);
//Function to set first element in the array equal to 0, and shift the rest of the elements over
int* elementShifter(int*, const int);
//Function to display array
void displayArray(int*, const int);

int main()
{
	//Variable to store array size
	const int SIZE = 5;
	//Array of numbers to be manipulated
	int array[SIZE] = {5, 7, 2, 1, 4};

	//Pointer variable to store return value of arrayExpander function
	int* arrayExpanded = arrayExpander(array, SIZE);

	cout << "Original array:" << endl;
	//Call function to display original array
	displayArray(array, SIZE);
	cout << endl;

	cout << "Expanded array:" << endl;
	//Call function to display expanded array
	displayArray(arrayExpanded, (SIZE * 2));
	cout << endl;

	//Delete pointer
	delete[] arrayExpanded;
	arrayExpanded = nullptr; // 0x0

	//Pointer variable to store return value of elementShifter function
	int* shiftedArray = elementShifter(array, SIZE);

	cout << "Shifted array: " << endl;
	//Call function to display shifted array
	displayArray(shiftedArray, (SIZE + 1));
	cout << endl;

	//Delete pointer
	delete[] shiftedArray;
	shiftedArray = nullptr; // 0x0

	//End
	return 0;
}

//Function to display array
void displayArray(int* array, const int SIZE)
{
	for (int i = 0; i < SIZE; i++) 
	{
		cout << "array[" << i << "]: " << array[i] << endl;
	}
}

//Function to expand array/double array and set second half of the elements equal to 0
int* arrayExpander(int array[], const int SIZE)
{
	//Variable to store the new size
	const int DOUBLE_SIZE = SIZE * 2;
	//Pointer variable to store new array values
	int* arrPtr = new int[DOUBLE_SIZE];

	//For loop to iterate through the new array and assign values
	for (int i = 0; i < DOUBLE_SIZE; i++) 
	{
		//If statement to set the second half the elements in the array created equal to 0
		if (i >= SIZE) 
		{
			*(arrPtr + i) = 0;
		}
		//Else statement to keep first half of the elements in the array equal to their original values
		else 
		{
			*(arrPtr + i) = array[i];
		}
	}
	//Return statement
	return arrPtr;
}

//Function to shift array and set first element equal to 0
int* elementShifter(int* array, const int SIZE)
{
	//Variable to store the new size
	const int NEW_SIZE = SIZE + 1;
	//Pointer variable to store new array values
	int* arrPtr = new int[NEW_SIZE];

	//For loop to iterate through the array values
	for (int i = 0; i < NEW_SIZE; i++)
	{
		//If statement to set the first element equal to 0
		if (i == 0)
			*(arrPtr + i) = 0;
		//Else statement to shift array values over/set new values in pointer equal to orginal values one spot over
		else
			*(arrPtr + i) = array[i - 1];
	}
	//Return statement
	return arrPtr;
}

/*
Original array:
array[0]: 5
array[1]: 7
array[2]: 2
array[3]: 1
array[4]: 4

Expanded array:
array[0]: 5
array[1]: 7
array[2]: 2
array[3]: 1
array[4]: 4
array[5]: 0
array[6]: 0
array[7]: 0
array[8]: 0
array[9]: 0

Shifted array:
array[0]: 0
array[1]: 5
array[2]: 7
array[3]: 2
array[4]: 1
array[5]: 4


F:\SCHOOL\CIS 2541(C++)\Page555Problems11and12\Debug\Page555Problems11and12.exe (process 12900) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/