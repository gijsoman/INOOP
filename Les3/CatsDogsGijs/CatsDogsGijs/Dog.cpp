#include "Dog.h"
#include <iostream>


Dog::Dog(const std::string name) : Animal(name)
{

}

void Dog::MakeNoise()
{
	std::cout << "WOOOF" << std::endl;
}


