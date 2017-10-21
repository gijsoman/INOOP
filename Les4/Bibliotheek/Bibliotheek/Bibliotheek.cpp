#include "Bibliotheek.h"
#include <iostream>

//bibliotheek die maar 1 boek kan vasthouden:(

Bibliotheek::Bibliotheek()
{
}

Bibliotheek::~Bibliotheek()
{
	//We deleten boekje zodra bibliotheek opgeruimt wordt
	delete boekje;
}

//laat de naam zien van het boekje in de bibliotheek
void Bibliotheek::toon()
{
	std::cout << boekje->boekNaam << std::endl;
}

//We wijzigen hier de pointer boekje naar het adres waarop we een nieuw boek aanmaken
void Bibliotheek::voegToe(std::string boekNaam)
{
	boekje = new Boek(boekNaam);
}

//We "lenen" het boekje "uit" we veranderen eigenlijk gewoon de naam van het adres waar boek naar wijst
void Bibliotheek::leenBoekUit(Boek* boek)
{
	std::cout << boek->boekNaam << " Uitgeleend" << std::endl;
	boek->boekNaam = "Alles is uitgeleend :(";
}

//We nemen het boek weer terug door de naam terug te veranderen.
void Bibliotheek::neemBoekTerug(Boek* boek)
{
	boek->boekNaam = "Harry Potter";
	std::cout << boek->boekNaam << " teruggekregen" << std::endl;
}