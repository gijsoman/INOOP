#pragma once
#include <vector>

#include "Broodje.h"

class Broodmandje
{
public:
	Broodmandje();
	//Broodmandje(const Broodmandje& b);

	void voegToe(std::string type);
	void toon();

private:
	Broodje broodje;
};

