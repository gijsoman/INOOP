#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "DetectAnimal.h"

//this makes a copy of the inserted animal
//void SaySomething(Animal animal)
//{
//	animal.Feed();
//	std::cout << animal.isHungry() << std::endl;
//}

//this changes the initial object because it references to the original object
void SaySomething(Animal& animal)
{
	animal.Feed();
	std::cout << animal.isHungry() << std::endl;
}

//void SaySomething(Animal* animal)
//{
//	animal->MakeNoise();
//}

int main() 
{
	Animal dier1 = Animal("piet");
	Dog hond1 = Dog("freddy");
	Cat kat1 = Cat("Felix");
	
	SaySomething(dier1);



	char c;
	std::cin >> c;
}