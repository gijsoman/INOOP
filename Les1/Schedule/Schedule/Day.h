#pragma once
class Day
{
public:
	Day();
	Day(int day);
	~Day();

	int val;

	static Day SetDay(int input);
};

