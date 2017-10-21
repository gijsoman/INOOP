#include <iostream>
#include "Bibliotheek.h"



Bibliotheek::Bibliotheek()
{
}


Bibliotheek::~Bibliotheek()
{
	delete boekje;
}

void Bibliotheek::toon()
{
	std::cout << boekje->naam << std::endl;
}

void Bibliotheek::voegToe(std::string name)
{
	boekje = new Boek(name);
}
