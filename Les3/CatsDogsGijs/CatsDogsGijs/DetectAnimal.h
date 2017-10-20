#pragma once

#include "Dog.h"
#include "Cat.h"

class DetectAnimal
{
public:
	void Detect(Dog dog);
	void Detect(Cat cat);
	void Detect(Animal animal);
};

