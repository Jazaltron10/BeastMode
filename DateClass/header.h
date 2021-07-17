#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <chrono>

using namespace std;

class DateClass
{
private:
	int month, day;



public:
	DateClass() {
		month = 1, day = 1;
	}
	void  GetDate();
	void WriteDate();
	bool validate();
};

#endif
