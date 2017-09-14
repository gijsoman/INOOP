#pragma once
using namespace std;
#include <string>

#include "Persoon.h"

class Docent : public Persoon
{
public:
	Docent();
	Docent(int age, string name, string vak);
	~Docent();

	string docentVak;

	string getVak();

};

