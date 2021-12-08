//Name: Kevin Morales
//Problem: 12
//Page: 661
//Course Grade
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Declaration for students structure
struct Students
{
    char name[30];
    int ID;
    double averageScore;
    char courseGrade;
    int* testArray;
};

//Declaration of functions
Students* createArrays(int, int);
void fillArrays(Students[], int, int);
void displayArrays(Students[], int, int);

int main()
{
    //Variable to store number of tests
    int numberOfTests;
    //Variable to store number of students
    int numberOfStudents;
    //Pointer to students array
    Students *arrayPointer;

    //Gather user input
    //Input number of students
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    //While loop to not allow answers less than 1 for number of students
    while (numberOfStudents <= 0)
    {
        cout << "Number of students less than 1 are not valid. Please try again. " << endl;
        cout << "Enter the number of students: ";
        cin >> numberOfStudents;
    }
    //Input number of tests
    //While loop to not allow answers less than 1 for number of tests
    cout << "Enter the number of tests: ";
    cin >> numberOfTests;
    while (numberOfTests <= 0)
    {
        cout << "Number of tests less than 1 are not valid. Please try again. " << endl;
        cout << "Enter the number of tests: ";
        cin >> numberOfTests;
    }
    //Call "createArrays" function and store pointer in "arrayPointer"
    arrayPointer = createArrays(numberOfStudents, numberOfTests);
    //Call "fillArrays" function to input values into students array and test arrays
    fillArrays(arrayPointer, numberOfStudents, numberOfTests);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    //Call "displayArrays" to display values stored in students array and test arrays
    displayArrays(arrayPointer, numberOfStudents, numberOfTests);
    //Free arrays
    free(arrayPointer);
    //End
    return 0;
}
//Function to create an array based on the number of students and the number of tests
Students* createArrays(int numStudents, int numTests)
{
    //Pointer to arrays
    Students* ptr;
    //Students array
    ptr = new Students[numStudents];
    //Create test arrays for each student
    for (int i = 0; i < numStudents; i++)
    {
        ptr[i].testArray = new int[numTests];
    }
    //Return value
    return ptr;
}
//Function to input values into students array and test arrays
void fillArrays(Students studentsArray[], int numStudents, int numTests)
{
    //For loop to gather input for student array
    for (int i = 0; i < numStudents; i++)
    {
        //Input student ID
        cout << "Enter Student ID: "; 
        cin >> studentsArray[i].ID;
        //Validate student ID
        while (studentsArray[i].ID <= 0)
        {
            cout << "Invalid. Enter a valid Student ID: ";
            cin >> studentsArray[i].ID;
        }
        
        //Input student name
        cout << "Enter Student Name: ";
        cin >> studentsArray[i].name;
        //Validate student name
        while (strlen(studentsArray[i].name) == 0)
        {
            cout << "Enter Student Name: ";
            cin >> studentsArray[i].name;
        }

        //Declare sum variable to store sum of all test scores
        int sum = 0;
        //For loop to gather input for test arrays
        for (int j = 0; j < numTests; j++)
        {
            //Input test scores
            cout << "Enter Test Score #" << (j + 1) << ": ";
            cin >> studentsArray[i].testArray[j];
            //Validate test scores
            while (studentsArray[i].testArray[j] < 0 )
            {
                cout << "Negative numbers are not accepted for test scores. " << endl;
                cout << "Enter Test Score #" << (j + 1) << ": ";
                cin >> studentsArray[i].testArray[j];
            }
            //Calculate sum of all test scores
            sum += studentsArray[i].testArray[j];
        }
        //Calculate average
        studentsArray[i].averageScore = sum / numTests;

        //If statements to designate a letter grade based on average
        if (studentsArray[i].averageScore >= 91)
        {
            studentsArray[i].courseGrade = 'A';
        }
        else if (studentsArray[i].averageScore < 91 && studentsArray[i].averageScore >= 81)
        {
            studentsArray[i].courseGrade = 'B';
        }
        else if (studentsArray[i].averageScore < 81 && studentsArray[i].averageScore >= 71)
        {
            studentsArray[i].courseGrade = 'C';
        }
        else if (studentsArray[i].averageScore < 71 && studentsArray[i].averageScore >= 61)
        {
            studentsArray[i].courseGrade = 'D';
        }
        else
        {
            studentsArray[i].courseGrade = 'F';
        }
    }
}

//Function to display students array and test arrays in a format
void displayArrays(Students studentsArray[], int numStudents, int numTests)
{
    //For loop to display values in students array
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student ID:   " << studentsArray[i].ID << endl;
        cout << "Student Name: " << studentsArray[i].name << endl;
        cout << endl;
        //For loop to display values in test arrays
        for (int j = 0; j < numTests; j++)
        {
            cout << "Test #"  << "    Score: " << endl;
            cout << "  " << (j + 1) <<  "        " << studentsArray[i].testArray[j] << endl;
        }
        cout << endl;
        cout << "Average: " << studentsArray[i].averageScore << endl;
        cout << "Grade:   " << studentsArray[i].courseGrade << endl;
        cout << endl; 
        cout << endl;
    }
}
/*
Enter the number of students: 2
Enter the number of tests: 2
Enter Student ID: 1234
Enter Student Name: John
Enter Test Score #1: 92
Enter Test Score #2: 87
Enter Student ID: 3214
Enter Student Name: Jenna
Enter Test Score #1: 98
Enter Test Score #2: 85




Student ID:   1234
Student Name: John

Test #    Score:
  1        92
Test #    Score:
  2        87

Average: 89
Grade:   B


Student ID:   3214
Student Name: Jenna

Test #    Score:
  1        98
Test #    Score:
  2        85

Average: 91
Grade:   A



F:\SCHOOL\CIS 2541(C++)\Page661Problem12\Debug\Page661Problem12.exe (process 6928) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/