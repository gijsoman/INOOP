#include <iostream>

#include "Persoon.h"
#include "Student.h"
#include "Docent.h"

//Displays a superclass(person) and two subclasses(student, docent). 
//The name and age functions are in the superclass and the grade and vak functions are in the subclasses
//The subclasses use the name and the age functions of the parent class(super class)
int main()
{
	Persoon *p = new Persoon(22, "Henkie");
	Student *s = new Student(12, "Bob", 7.5);
	Docent *d = new Docent(30, "Marcel", "Wiskunde");

	std::cout << p->getAge() << "|" << p->getName() << endl;
	std::cout << s->getAge() << "|" << s->getName() << "|" << s->getGrade() << endl;
	std::cout << d->getAge() << "|" << d->getName() << "|" << d->getVak() << endl;

	char key;
	std::cin >> key;

	return 0;
}