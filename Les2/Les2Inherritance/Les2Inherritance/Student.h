#pragma once
using namespace std;

#include <string>
#include "Persoon.h"

class Student : public Persoon
{
public:
	Student();
	Student(int age, string name, float grade);
	~Student();

	float studentGrade;

	float getGrade();

};

