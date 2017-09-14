#include "Persoon.h"

//Creates a person with a name and an age. uses inserted values when an object of this class is made.

Persoon::Persoon()
{
}

//Set the name and age of the person
Persoon::Persoon(int age, string name)
{
	personAge = age;
	personName = name;
}


Persoon::~Persoon()
{
}

//Get the name of the person
string Persoon::getName()
{
	return personName;
}

//Get the age of the person
int Persoon::getAge()
{
	return personAge;
}


