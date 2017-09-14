#include "Student.h"

//Creates a student with an age a name and a grade. Inserted values when creating an object of this class are used.

Student::Student()
{
}

Student::Student(int age, string name, float grade)
{
	personAge = age;
	personName = name;
	studentGrade = grade;
}


Student::~Student()
{
}

float Student::getGrade()
{
	return studentGrade;
}
