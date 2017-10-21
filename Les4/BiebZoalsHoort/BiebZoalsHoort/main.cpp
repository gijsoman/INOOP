#include <iostream>
#include "Bibliotheek.h"

/* dit is bieb zoals het hoort? in ieder geval zoals broodmandje ook werkt */


void geefBoekDoor(Bibliotheek* bibliotheek)
{
	std::cout << "Boek gekregen" << std::endl;
	bibliotheek->toon();

	bibliotheek->voegToe("Kippenvel: de man met het masker");
	bibliotheek->toon();
}

int main()
{
	Bibliotheek* bibi = new Bibliotheek();
	bibi->voegToe("shaw shank redemption");
	bibi->toon();
	geefBoekDoor(bibi);
	bibi->toon();

	char c;
	std::cin >> c;
	delete bibi;
	return 0;
}
