#include "stdafx.h"
#include "Date.h"

//gives a date when your lessons will take place.
Date::Date()
{
}

Date::Date(Day d, Month m, Year y)
{
	day = d;
	month = m;
	year = y;
}


Date::~Date()
{
}
