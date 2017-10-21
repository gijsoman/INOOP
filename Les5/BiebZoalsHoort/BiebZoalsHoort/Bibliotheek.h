#pragma once
#include <string>
#include "Boek.h"
#include <vector>

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(std::string filiaal);
	Bibliotheek(const Bibliotheek* bieb, std::string filiaal);
	Bibliotheek& operator=(const Bibliotheek*);
	virtual ~Bibliotheek();

	void toon();
	void voegToe(std::string name);

	std::string filiaal;
private:
	std::vector<Boek*> boekjes;


};

