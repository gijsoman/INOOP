#include "stdafx.h"
#include "Date.h"

//gives a date when your lessons will take place.
Date::Date()
{
}

Date::Date(Day d, Month m, Year y)
{
	day = d.val;
	month = m.val;
	year = y.val;
}


Date::~Date()
{
}
