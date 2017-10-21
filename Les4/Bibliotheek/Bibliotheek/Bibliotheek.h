#pragma once
#include <string>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	~Bibliotheek();

	void toon();
	void voegToe(std::string boekNaam);
	void leenBoekUit(Boek* boek);
	void neemBoekTerug(Boek* boek);

	Boek* boekje = new Boek();
};

