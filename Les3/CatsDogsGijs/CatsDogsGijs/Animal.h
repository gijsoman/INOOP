#pragma once

#include <string>

class Animal
{
public:
	Animal(const std::string name);

	virtual void Animal::MakeNoise();

	void Animal::Feed();

	std::string isHungry();
private:
	std::string name;
	bool isFed = false;
};

