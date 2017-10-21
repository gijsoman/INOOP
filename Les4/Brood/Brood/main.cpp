#include <iostream>
#include "Broodmandje.h"
#include "Broodje.h"

void geefMandjeDoor(Broodmandje mandje) {
	std::cout << "Mandje gekregen" << std::endl;
	mandje.toon();

	mandje.voegToe("ciabatta");
	mandje.toon();

	std::cout << "Mandje teruggeven" << std::endl;
}

int main()
{
	Broodmandje mandje = Broodmandje();
	mandje.toon();

	mandje.voegToe("kaiserbroodje");
	mandje.toon();

	geefMandjeDoor(mandje);

	std::cout << "Mandje teruggekregen" << std::endl;

	mandje.toon();

	char c;
	std::cin >> c;
	return 0;
}