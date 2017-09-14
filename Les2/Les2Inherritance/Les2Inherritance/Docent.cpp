#include "Docent.h"

//Creates a docent with an age a name and a vak. Uses the values that are used to make an object of this class.

Docent::Docent()
{
}

Docent::Docent(int age, string name, string vak)
{
	personAge = age;
	personName = name;
	docentVak = vak;
}


Docent::~Docent()
{
}

string Docent::getVak()
{
    return docentVak;
}
