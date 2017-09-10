#pragma once

#include "Date.h"
#include "Teacher.h"
#include "Rooms.h"
#include "Time.h"
#include "Subject.h"
#include "Clas.h"

class Lesson
{
public:
	Lesson();
	~Lesson();

	Clas clas;
	Teacher teacher;
	Rooms room;
	Time time;
	Subject subject;
	Date date;
};

