#pragma once
#include <string>
#include "Boek.h"
class Bibliotheek
{
public:
	Bibliotheek();
	~Bibliotheek();

	void toon();
	void voegToe(std::string name);
private:
	Boek *boekje = new Boek();
};

