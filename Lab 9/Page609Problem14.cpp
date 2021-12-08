//Name: Kevin Morales
//Problem: 14
//Page: 609
//Word Separator
#include <iostream>
#include <string>
using namespace std;


int main()
{
    //String to store user input
    string sentence = "                                                         ";

    //Defining user input
    cout << "Please enter an unseparated string. Example: HelloHowAreYou" << endl;
    cout << "Enter here: " << endl;

    //getline() function to gather user input and store in string
    getline(cin, sentence);

    //For loop to insert a space between words and lowercase all uppercase letters, with the exception of the first letter. 
    for (int i = 1; i < sentence.length(); i++)
    {
        //If statement to place space and lowercase letter when an uppercase letter is found
        if (isupper(sentence[i]))
        {
            sentence[i] = tolower(sentence[i]);
            sentence.insert(i, " ");
        }
    }

    //For loop which loops through the string to print it out
    for (int i = 0; i < sentence.length(); i++)
    {
        cout << sentence[i];
    }

    //End
    return 0;
}

/*
Please enter an unseparated string. Example: HelloHowAreYou
Enter here:
HelloHowAreYou
Hello how are you
F:\SCHOOL\CIS 2541(C++)\Page609Problem14\Debug\Page609Problem14.exe (process 17700) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/