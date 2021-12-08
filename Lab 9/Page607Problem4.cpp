//Name: Kevin Morales
//Problem: 4
//Page: 607
//Average Number of Letters(+Word Counter)
#include <iostream>
#include <string>
using namespace std;
//Function declaration
void countAverage(char[]);

int main() 
{
    //C-String(character array)
    char cString[100];

    //Defining user input
    cout << "Enter a string: " << endl;

    //Gathering user input into C-String using cin.getline()
    cin.getline(cString, 100);

    //Calling "countAverage()" function
    countAverage(cString);

    //End
    return 0;
}

//Function to calculate the number of words in a C-String and the average number of letters per word
void countAverage(char string[])
{
    //Word counter
    float words = 0;
    //Letter counter
    float letters = 0;
    //Variable to store equation which will calculate the average number of letters
    float averageLetters;

    //For statement which loops through the string and calculates the number of letters in the string
    for (int i = 0; i < strlen(string); i++)
    {
        //If statement which increments "letters" count every time an alphabetical character is found
        if (isalpha(string[i]))
        {
            letters++;
        }
    }

    //If statement and for statement below calculate the number of words in the string
    int i = 0;
    if (isalpha(string[0]))
    {
        words++;
    }
    //For loop to loop through the string
    for (i = 1; i < strlen(string); i++)
    {
        //If statement to that increments "words" if an alphabetic 
        //character is found and the index behind it is not an alphabetical character
        if ((isalpha(string[i])) && (!isalpha(string[i - 1])))
        {
            words++;
        }
    }

    //Equation that calculates the average letters per word
    averageLetters = letters / words;

    //Display number of words and average number of letters per word
    cout << "Number of words in string: " << words << endl;
    cout << "Average number of letters per word: " << averageLetters << endl;
}

/*
Enter a string:
Four score and seven years ago
Number of words in string: 6
Average number of letters per word: 4.16667

F:\SCHOOL\CIS 2541(C++)\Page607Problem4\Debug\Page607Problem4.exe (process 14600) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/