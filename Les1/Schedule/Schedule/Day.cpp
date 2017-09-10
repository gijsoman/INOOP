#include "stdafx.h"
#include "Day.h"

//This will return the day but not above the maximun days that can be put in a month.
Day::Day()
{
}

Day::Day(int day)
{
	val = day;
}


Day::~Day()
{
}

Day Day::SetDay(int input)
{
	if (input > 31) { return Day(31); }
	if (input < 1) { return Day(1); }

	return Day(input);
}
