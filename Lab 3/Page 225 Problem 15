// Name: Kevin Morales
// Problem: 15
// Page: 225
// Shipping Charges
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Declare variables
	int weight, distance;
	float rate, total;
	bool charge;

	//Gather input and set
	cout << "Enter the weight of the package(in kg): ";
	cin >> weight;

	cout << "Enter the distance to be shipped(in miles): ";
	cin >> distance;

	//Calculation using boolean and else/if statements
	if (weight <= 0)
		cout << "We do not accept packages below 0kgs."  << endl;
	else if (weight <= 2)
		rate = 1.10;
	else if (weight <= 6)
		rate = 2.20;
	else if (weight <= 10)
		rate = 3.70;
	else if (weight <= 20)
		rate = 4.80;
	else if (weight > 20)
		cout << "We do not accept packages above 20kgs." << endl;



	if (distance <= 10)
		cout << "We do not accept distances of less than 10 miles." << endl;
	else if (distance <= 500)
		total = rate * 1;
	else if (distance <= 1000)
		total = rate * 2;
	else if (distance <= 1500)
		total = rate * 3;
	else if (distance <= 2000)
		total = rate * 4;
	else if (distance <= 2500)
		total = rate * 5;
	else if (distance <= 3000)
		total = rate * 6;
	else if (distance > 3000)
		cout << "We do not accept distances of more than 3000 miles." << endl;

	//Display results
	cout << fixed << setprecision(2);

	cout << left << setw(20) << "Total Cost:  " << right << setw(20) << "$" << total << endl;

	//end of program
	return 0;
}
/*
Enter the weight of the package(in kg): 8
Enter the distance to be shipped(in miles): 2385
Total Cost:                            $18.50
*/
