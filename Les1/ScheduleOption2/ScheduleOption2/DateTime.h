#pragma once

#include <ctime>

class DateTime
{
public:
	DateTime();
	~DateTime();

	int dateYear;
	int dateMonth;
	int dateDay;

	time_t beginTime;
	time_t enndTime;
};

