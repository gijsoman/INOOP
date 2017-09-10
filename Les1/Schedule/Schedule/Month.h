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

	static Month January()		{ return Month(1); };
	static Month February()		{ return Month(2); };
	static Month March()		{ return Month(3); };
	static Month April()		{ return Month(4); };
	static Month May()			{ return Month(5); };
	static Month June()			{ return Month(6); };
	static Month July()			{ return Month(7); };
	static Month August()		{ return Month(8); };
	static Month September()	{ return Month(9); };
	static Month October()		{ return Month(10); };
	static Month November()		{ return Month(11); };
	static Month December()		{ return Month(12); };
};

