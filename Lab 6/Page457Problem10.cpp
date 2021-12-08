//Name: Kevin Morales
//Problem: 10
//Page: 457
//Driver's License Exam
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Variable to catch output from gradeExam function
int numberRight;
//Variable to set array size
const int SIZE = 20;
//Declare function readAnswers
void readAnswers(char[]);
//Declare function gradeExam
int gradeExam(char[], char[]);
//Declare function printResults
void printResults(int, char[], char[]);

//Array containing the correct answers
char correctAnswers[SIZE] = { 'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B' };
//Array to store user input/student's answers
char myAnswers[SIZE];

int main()
{
	//Call function to input answers into array
	readAnswers(myAnswers);

	//Call function to compare student's answers to the correct answers
	numberRight = gradeExam(myAnswers, correctAnswers);
	
	//Call function to print results
	printResults(numberRight, myAnswers, correctAnswers);
	
	//End
	return 0;
}

//Function to print results
void printResults(int x, char y [], char z []) 
{
	//If statement to check if the student passed the Driver's License Exam
	if ( x > 15) 
	{
		cout << "You passed the Driver's License Exam!" << endl;
	}
	else 
	{
		cout << "You failed the Driver's License Exam." << endl;
	}

	//For loop to count the number of incorrect answers
	int numberIncorrect = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (y[i] != z[i])
			numberIncorrect++;
	}

	//Print table
	cout << "                              " << endl;
	cout << "You had " << numberRight << " right answers and " << numberIncorrect << " wrong answers" << endl;
	cout << "                              " << endl;
	cout << "*** Displaying Score Sheet ***" << endl;
	cout << "                              " << endl;
	cout << "Your    Correct               " << endl;
	cout << "Answer  Answer  Remark        " << endl;
	cout << "------  ------  ------        " << endl;

	//For loop to display a message on/mark wrong answers
	for (int i = 0; i < SIZE; i++)
	{
		cout << "   " << y[i] << "       " << z[i];
			if (y[i] != z[i])
				cout << "    *** Wrong ***";
			cout << endl;
	}

}
//Function to compare the student's answers to the right answers and return the correct number of answers
int gradeExam(char m [], char c []) 
{
	int numberCorrect = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (m[i] == c[i])
			numberCorrect++;
	}
	return numberCorrect;
}

//Function to input students answers into an array and validate them
void readAnswers(char myAnswers[])
{
	cout << "Enter the student's answers:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << (i + 1) << ". ";
		cin >> myAnswers[i];
		//While loop to prevent characters that aren't either ABC or C from being entered.
		while (myAnswers[i] != 'A' && myAnswers[i] != 'B' && myAnswers[i] != 'C' && myAnswers[i] != 'D')
		{
			cout << "Only the letters A, B, C, or D are accepted as answers, please try again." << endl;
			cout << (i + 1) << ". ";
			cin >> myAnswers[i];
		}
	}
}
/*
Example 1:

Enter the student's answers:
1. A
2. A
3. A
4. A
5. A
6. A
7. A
8. A
9. A
10. A
11. A
12. A
13. A
14. A
15. A
16. A
17. A
18. A
19. A
20. A
You failed the Driver's License Exam.

You had 4 right answers and 16 wrong answers

*** Displaying Score Sheet ***

Your    Correct
Answer  Answer  Remark
------  ------  ------
   A       A
   A       D    *** Wrong ***
   A       B    *** Wrong ***
   A       B    *** Wrong ***
   A       C    *** Wrong ***
   A       B    *** Wrong ***
   A       A
   A       B    *** Wrong ***
   A       C    *** Wrong ***
   A       D    *** Wrong ***
   A       A
   A       C    *** Wrong ***
   A       D    *** Wrong ***
   A       B    *** Wrong ***
   A       D    *** Wrong ***
   A       C    *** Wrong ***
   A       C    *** Wrong ***
   A       A
   A       D    *** Wrong ***
   A       B    *** Wrong ***

F:\SCHOOL\CIS 2541(C++)\Page457Problem10\Debug\Page457Problem10.exe (process 15676) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .







Example 2:

Enter the student's answers:
1. A
2. D
3. B
4. B
5. C
6. B
7. A
8. B
9. C
10. D
11. A
12. C
13. D
14. B
15. D
16. C
17. C
18. A
19. D
20. b
Only the letters A, B, C, or D are accepted as answers, please try again.
20. B
You passed the Driver's License Exam!

You had 20 right answers and 0 wrong answers

*** Displaying Score Sheet ***

Your    Correct
Answer  Answer  Remark
------  ------  ------
   A       A
   D       D
   B       B
   B       B
   C       C
   B       B
   A       A
   B       B
   C       C
   D       D
   A       A
   C       C
   D       D
   B       B
   D       D
   C       C
   C       C
   A       A
   D       D
   B       B

F:\SCHOOL\CIS 2541(C++)\Page457Problem10\Debug\Page457Problem10.exe (process 15012) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/