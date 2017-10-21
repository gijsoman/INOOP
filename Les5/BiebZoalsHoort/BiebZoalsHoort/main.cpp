#include <iostream>
#include "Bibliotheek.h"

/* dit is bieb die meerdere boeken kan vasthouden en een filiaalnaam heeft. 
Ook is er een copyconstructor toegevoegd aan de bibliotheek en ruimen we alles netjes op*/


void geefBoekDoor(Bibliotheek* bibliotheek)
{
	std::cout << "Boek gekregen" << std::endl;
	bibliotheek->toon();

	bibliotheek->voegToe("Kippenvel: de man met het masker");
	bibliotheek->toon();
}

int main()
{
	//eerst maken we een normale bibliotheek aan met een naam
	Bibliotheek almelo = Bibliotheek("almelo");
	//dan voegen we een aantal boeken toe en laten ze zien
	almelo.voegToe("Het duistere bos");
	almelo.voegToe("Het kasteel in het duistere bos");
	almelo.voegToe("Het kamertje in het kasteel in het duistere bos"); 
	almelo.toon();

	// Het gewoon opvragen van copyconstructor
	// Bibliotheek hengelo = almelo;
	//copy constructor met nieuwe naam (deep copy volgens mij omdat we in de constructor pointen naar het adres van almelo)
	Bibliotheek hengelo(&almelo, "hengelo");
	hengelo.toon();
	
	//als laatste gaan we assigenen maar voordat we dat doen gebruiken we de gewone constructor om een naam mee te geven.
	//Ook deze copy is deep omdat we pointen naar het adres van hengelo
	Bibliotheek enschede("enschede");
	enschede = &hengelo;
	enschede.toon();

	almelo.voegToe("Hoe te werken met pointers in c++");

	almelo.toon();
	hengelo.toon();
	enschede.toon();

	char c;
	std::cin >> c;
	return 0;
}
