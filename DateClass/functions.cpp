#include <iostream>
#include <string>
#include <chrono>
#include "header.h"

void DateClass::GetDate()
{
	int d; int m;
	cout << "enter your day value in integer format\n";
	cin >> d;
	cout << "enter your month value in integer format\n";
	cin >> m;
	month = m;
	day = d;
}

void DateClass::WriteDate()
{
	if (month == 1)
	{
		cout << "january " << day << endl;
	}
	else if (month == 2)
	{
		cout << "february " << day << endl;
	}

	else if (month == 3)
	{
		cout << "march " << day << endl;
	}

	else if (month == 4)
	{
		cout << "april " << day << endl;
	}

	else if (month == 5)
	{
		cout << "may " << day << endl;
	}

	else if (month == 6)
	{
		cout << "june " << day << endl;
	}

	else if (month == 7)
	{
		cout << "july " << day << endl;
	}

	else if (month == 8)
	{
		cout << "august " << day << endl;
	}

	else if (month == 9)
	{
		cout << "september " << day << endl;
	}

	else if (month == 10)
	{
		cout << "october " << day << endl;
	}

	else if (month == 11)
	{
		cout << "november " << day << endl;
	}
	else
	{
		cout << "december " << day << endl;
	}


}
bool DateClass::validate()
{

	bool ok;
	if ((day >= 1 && day <= 28 && month == 2)
		|| (day >= 1 && day <= 30 && (month == 9 || month == 4 || 
			month == 6 || month == 11)) 
		|| (day >= 1 && day <= 31 && (month == 1 || month == 3 || 
			month == 5 || month == 7 || 
			month == 8 || month == 10 || month == 12)))
	{
		ok = true;
		return ok;
	}
	else {
		ok = false;
		return ok;
	}
}