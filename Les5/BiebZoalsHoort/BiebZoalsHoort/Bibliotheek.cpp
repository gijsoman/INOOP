#include <iostream>
#include "Bibliotheek.h"



Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(std::string filiaal) : filiaal(filiaal)
{
}

Bibliotheek::Bibliotheek(const Bibliotheek& copy)
{
	filiaal = "nieuw filiaal";
	std::cout << "Wij openen een nieuw filiaal en hebben dezelfde boeken als: " << copy.filiaal << std::endl;
	//We maken hier nieuwe pointers aan naar nieuwe boeken zodat we 
	//een deep copy uitvoeren. We hebben nu eigen pointers naar eigen boeken.
	//Deze pointers worden opgeruimt zodra we de destructor van bibliotheek
	//aanroepen.
	for (int  i = 0; i < copy.boekjes.size(); i++)
	{
		Boek* boekje = new Boek(copy.boekjes[i]->naam);
		boekjes.push_back(boekje);
	}
}

Bibliotheek &Bibliotheek::operator=(const Bibliotheek& andereBieb)
{
	std::cout << "Het filiaal: " << andereBieb.filiaal << " is aan ons toegewezen." << std::endl;
	if (this != &andereBieb) 
	{
		//eerst maken we een integer waar we de size in op kunnen slaan.
		//Deze gaat namelijk veranderen als we de array leeg gaan gooien.
		int vectorSize = boekjes.size();
		//we moeten eerst boekjes leegmaken anders krijgen we dubbele boekjes
		for (int i = 0; i < vectorSize; i++)
		{
			//verijderd niet alleen heet laatste element in de lijst maar maakt hem ook kapot.
			//geen zwervende pointers dus?
			boekjes.pop_back();
		}
		for (int i = 0; i < andereBieb.boekjes.size(); i++)
		{
			Boek* boekje = new Boek(andereBieb.boekjes[i]->naam);
			boekjes.push_back(boekje);
		}
	}
	return *this;
}


Bibliotheek::~Bibliotheek()
{
	std::cout << "Het filiaal: " << filiaal << " is gesloten" << std::endl;
	for (int i = 0; i < boekjes.size(); i++)
	{
		delete boekjes[i];
	}
}

void Bibliotheek::toon()
{
	std::cout << "filiaal: " << filiaal << " heeft de volgende boeken: " << std::endl;
	for (int i = 0; i < boekjes.size() ; i++)
	{
		std::cout << boekjes[i]->naam << std::endl;
	}

}

void Bibliotheek::voegToe(std::string name)
{
	boekjes.push_back(new Boek(name));
}
