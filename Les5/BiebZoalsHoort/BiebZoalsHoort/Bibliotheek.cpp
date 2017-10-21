#include <iostream>
#include "Bibliotheek.h"



Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(std::string filiaal) : filiaal(filiaal)
{
}

Bibliotheek::Bibliotheek(const Bibliotheek* bieb, std::string filiaal) : filiaal(filiaal)
{
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	boekjes = bieb->boekjes;

	//omslachtige eerste versie
	//for (int i = 0; i < bieb.boekjes.size(); i++)
	//{
	//	boekjes.push_back(bieb.boekjes[i]);
	//}
}

Bibliotheek &Bibliotheek::operator=(const Bibliotheek* andereBieb)
{
	std::cout << "Lekker assignen" << std::endl;
	if (this != andereBieb) 
	{
		for (int i = 0; i < andereBieb->boekjes.size(); i++)
		{
			Boek* boekje = new Boek(andereBieb->boekjes[i]->naam);
			boekjes.push_back(boekje);
		}
	}
	return *this;
}


Bibliotheek::~Bibliotheek()
{
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
