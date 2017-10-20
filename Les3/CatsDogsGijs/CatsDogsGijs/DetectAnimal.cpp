#include "DetectAnimal.h"
#include <iostream>

void DetectAnimal::Detect(Dog dog)
{
	std::cout << "This is a dog." << std::endl;
}

void DetectAnimal::Detect(Cat cat)
{
	std::cout << "This is a cat." << std::endl;
}

void DetectAnimal::Detect(Animal animal)
{
	std::cout << "This sure is an animal." << std::endl;
}

