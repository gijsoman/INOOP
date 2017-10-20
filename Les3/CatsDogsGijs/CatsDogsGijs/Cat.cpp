#include "Cat.h"
#include <iostream>


Cat::Cat(std::string name) : Animal(name)
{
}

void Cat::MakeNoise()
{
	std::cout << "MEOOW!" << std::endl;
}
