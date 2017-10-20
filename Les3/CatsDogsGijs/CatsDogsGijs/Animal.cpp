#include "Animal.h"

#include <iostream>s

Animal::Animal(const std::string name) : name(name) //zeggen we hier dat onze locale name gelijk is aan de name in de functie?
{

}

void Animal::MakeNoise()
{
	std::cout << "RAAWR" << std::endl;
}

void Animal::Feed()
{
	isFed = true;
}

std::string Animal::isHungry()
{
	if (isFed) {
		return "I'm fine";
	}
	else {
		return "Hungry!";
	}
}

