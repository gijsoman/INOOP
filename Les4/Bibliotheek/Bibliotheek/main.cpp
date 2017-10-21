#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"
/*Ik heb hier de opdracht misschien iets te letterlijk genomen ik neem aan dat hij
net als bij broodmandje een boek door moest geven maar ik dacht ik probeer het lekker
op deze manier. De andere versie zoals het broodmandje zal ik ook maken.*/

/*we maken een bieb aan(in dit geval geen pointer omdat de functie die het boek
uitleend in de bieb zelf zit). Deze bieb zal zelf opgeruimt worden wanneer hij 
buiten de scope komt en dan ook zijn destructor aanroepen waarin de pointer boekje verwijderd
Zal worden*/
int main()
{
	Bibliotheek bibi = Bibliotheek();

	bibi.voegToe("Harry Potter");
	bibi.toon();
	
	bibi.leenBoekUit(bibi.boekje);
	bibi.toon();
	bibi.neemBoekTerug(bibi.boekje);
	bibi.toon();

	char c;
	std::cin >> c;
	return 0;
}