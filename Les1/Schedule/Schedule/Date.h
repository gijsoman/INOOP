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

	Day day;
	Month month;
	Year year;
};

