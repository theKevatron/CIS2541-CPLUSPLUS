//Name: Kevin Morales
//Problem: 2
//Page: 808
//Employee Class
#pragma once

#include <string>

using namespace std;

class Clock
{
public:
	//contructor - default values for objects if none are defined in main
	Clock(int = 0, int = 0);

	void setHour(int);
	void setMinute(int);

	int getHour() const { return Hour; }
	int getMinute() const { return Minute; }

	void printStandard() const;

private:
	int Hour;
	int Minute;
};


//default arugments
Clock::Clock(int h, int m)
{
	setHour(h);
	setMinute(m);
}

void Clock::printStandard() const
{
	//would have formatted to display hours in 12 and minutes in 60
	if (Hour > 12)


}

void Clock::setHour(int h)
{
	if (h < 0 || h > 23)
		throw exception("Hour is invalid.");
	else
		Hour = h;
}

void Clock::setMinute(int m)
{
	if (m < 0 || m > 59)
		throw exception("Minute is invalid.");
	else
		Minute = m;
}
