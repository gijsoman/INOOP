#pragma once
class Month
{
public:
	// constructors
	Month();
	Month(int month);

	// destructors
	~Month();

	int val;

	Month January()		{ return Month(1); };
	Month February()	{ return Month(2); };
	Month March()		{ return Month(3); };
	Month April()		{ return Month(4); };
	Month May()			{ return Month(5); };
	Month June()		{ return Month(6); };
	Month July()		{ return Month(7); };
	Month August()		{ return Month(8); };
	Month September()	{ return Month(9); };
	Month October()		{ return Month(10); };
	Month November()	{ return Month(11); };
	Month December()	{ return Month(12); };
};

