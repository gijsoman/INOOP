#pragma 

#include "Year.h"
#include "Month.h"
#include "Day.h"
class Date
{
public:
	Date();
	Date(Day d, Month m, Year y);
	~Date();
	
	int year;
	int month;
	int day;
};

