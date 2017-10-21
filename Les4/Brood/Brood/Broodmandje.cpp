#include "Broodmandje.h"

#include <iostream>

Broodmandje::Broodmandje()
{
	broodje = Broodje("onbekend");
}

//Broodmandje::Broodmandje(const Broodmandje& b)
//{
//	std::cout << "Broodmandje CCTOR" << std::endl;
//}

void Broodmandje::voegToe(std::string type)
{
	broodje = Broodje(type);
}

void Broodmandje::toon() {
	std::cout << "Broodmandje " << this << " bevat " << broodje.type << " " << &broodje << std::endl;
}
