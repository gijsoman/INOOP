// Schedule.cpp : Defines the entry point for the console application.
// in this program you can make the schedule for your school by assigning lessons to classes.

#include "stdafx.h"
#include <iostream>

#include "Date.h"
#include "Year.h"
#include "Month.h"
#include "Day.h"

int main()
{
	int i;
	Date* d = new Date(Day::SetDay(29), Month::November(), Year(2017));

	std::cout << d->day << "|" << d->month << "|" << d->year;
	std::cin >> i;
    return 0;
}
