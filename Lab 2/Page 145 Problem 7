//Name: Kevin Morales
//Problem: 7
//Page: 145
//Box Office
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Declare variables
	string movie;
	int Atickets, Ctickets;
	float Aprofit, Cprofit, Gprofit, Nprofit, Distributor;

	//Read input
	cout << "Enter name of movie: ";
	cin >> movie;
	cin.ignore();

	cout << "Enter the amount of adult tickets sold: ";
	cin >> Atickets;
	cin.ignore();

	cout << "Enter the amount of child tickets sold:  ";
	cin >> Ctickets;

	//Calculation
	Aprofit = Atickets * 10;
	Cprofit = Ctickets * 6;
	Gprofit = Aprofit + Cprofit;
	Nprofit = Gprofit * 0.2;
	Distributor = Gprofit * 0.8;

	//Display output
	cout << fixed << setprecision(2);

	cout << left << setw(35) << "Movie Name:" << right << setw(35) << "'" << movie << "'" << endl;
	cout << left << setw(35) << "Adult tickets sold:" << right << setw(37) << Atickets << endl;
	cout << left << setw(35) << "Child tickets sold:" << right << setw(37) << Ctickets << endl;
	cout << left << setw(35) << "Gross box office profit:" << right << setw(35) << "$" << Gprofit << endl;
	cout << left << setw(35) << "Net box office profit:" << right << setw(35) << "$" << Nprofit << endl;
	cout << left << setw(35) << "Amount paid to the distributor:" << right << setw(35) << "$" << Distributor << endl;

	//end of program
	return 0;
}
/*
Enter name of movie: Godzilla
Enter the amount of adult tickets sold: 246
Enter the amount of child tickets sold:  113
Movie Name:                                                          'Godzilla'
Adult tickets sold:                                                  246
Child tickets sold:                                                  113
Gross box office profit:                                             $3138.00
Net box office profit:                                               $627.60
Amount paid to the distributor:                                      $2510.40
*/
