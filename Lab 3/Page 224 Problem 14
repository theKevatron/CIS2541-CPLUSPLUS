// Name: Kevin Morales
// Problem: 14
// Page: 224
// Bank Charges
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Declare variables
	int checks;
	float balance, bankCharge, checkFee, total;
	bool charge;

	//Gather input and set
	cout << "Enter the beginning balance for the month: ";
	cin >> balance;

	cout << "Enter the number of checks written this month: ";
	cin >> checks;

	bankCharge = 10.0;

	//Calculation using boolean and else/if statements
	if (checks >= 60)
		checkFee = checks * 0.04;
	else if (checks >= 40)
		checkFee = checks * 0.06;
	else if (checks >= 20)
		checkFee = checks * 0.08;
	else
		checkFee = checks * 0.10;

	total = bankCharge + checkFee;

	if (balance >= 400)
		charge = false;
	else
		charge = true;

	if (charge)
		cout << left << setw(20) << "Balance Fee: " << right << setw(25) << "$15.00" << endl;
	if (charge)
		total = total + 15;

	//Display results
	cout << fixed << setprecision(2);

	cout << left << setw(20) << "Monthly Charge: " << right << setw(20) << "$" << bankCharge << endl;
	cout << left << setw(20) << "Check Fee: " << right << setw(20) << "$" << checkFee << endl;
	cout << left << setw(20) << "Total Cost:  " << right << setw(20) << "$" << total << endl;

	//end of program
	return 0;
}
/*
Enter the beginning balance for the month: 1000
Enter the number of checks written this month: 55
Monthly Charge:                        $10.00
Check Fee:                             $3.30
Total Cost:                            $13.30



Enter the beginning balance for the month: 500
Enter the number of checks written this month: 6
Monthly Charge:                        $10.00
Check Fee:                             $0.60
Total Cost:                            $10.60




Enter the beginning balance for the month: 405
Enter the number of checks written this month: 36
Monthly Charge:                        $10.00
Check Fee:                             $2.88
Total Cost:                            $12.88



Enter the beginning balance for the month: 386
Enter the number of checks written this month: 23
Balance Fee:                           $15.00
Monthly Charge:                        $10.00
Check Fee:                             $1.84
Total Cost:                            $26.84
*/
