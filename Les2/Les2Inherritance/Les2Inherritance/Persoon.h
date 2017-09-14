#pragma once
using namespace std;

#include <string>

class Persoon
{
public:
	Persoon();
	Persoon(int age, string name);
	~Persoon();

	string personName;
	int personAge = 0;

	string getName();
	int getAge();
};

