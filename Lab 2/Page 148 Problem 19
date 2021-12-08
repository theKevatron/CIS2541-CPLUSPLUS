// Name: Kevin Morales
// Problem: 19
// Page: 148
// Monthly Payments
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Declare variables
	float PercentAinterest, Ainterest, Rate, N, L, X, Payment, AmountPB, IPaid, Y, Minterest;

	//Read input
	cout << "Enter the annual interest rate(in percent %): ";
	cin >> PercentAinterest;
	cin.ignore();

	cout << "Enter the number of payments: ";
	cin >> N;
	cin.ignore();

	cout << "Enter the loan amount: ";
	cin >> L;

	//Calculation
	Ainterest = PercentAinterest / 100;
	Minterest = PercentAinterest / 12;
	Rate = Ainterest / 12;
	Y = 1 + Rate;
	X = pow(Y, N);

	Payment = ((Rate * X) / (X - 1)) * L;

	AmountPB = Payment * N;

	IPaid = AmountPB - L;

	cout << fixed << setprecision(2);

	cout << left << setw(20) << "Loan Amount: " << right << setw(20) << "$" << L << endl;
	cout << left << setw(20) << "Monthly Interest Rate: " << right << setw(20) << Minterest << "%" << endl;
	cout << left << setw(20) << "Number of Payments: " << right << setw(24) << N << endl;
	cout << left << setw(20) << "Monthly Payment: " << right << setw(20) << "$" << Payment << endl;
	cout << left << setw(20) << "Amount Paid Back: " << right << setw(20) << "$" << AmountPB << endl;
	cout << left << setw(20) << "Interest Paid: " << right << setw(20) << "$" << IPaid << endl;

	//end of program
	return 0;
}
/*
Enter the annual interest rate(in percent %): 15
Enter the number of payments: 24
Enter the loan amount: 10000
Loan Amount:                           $10000.00
Monthly Interest Rate:                 1.25%
Number of Payments:                    24.00
Monthly Payment:                       $484.86
Amount Paid Back:                      $11636.76
Interest Paid:                         $1636.76
*/
