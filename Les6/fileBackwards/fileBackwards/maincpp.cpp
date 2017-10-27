#include <iostream>
#include <fstream>

using namespace std;

#define FILE "D:\\SCHOOL\\INOOP\\INOOP\\Les6\\fileBackwards\\Hoi.txt"
#define OUT "D:\\SCHOOL\\INOOP\\INOOP\\Les6\\fileBackwards\\Out.txt"

//telt alle characters in het bestand.
int countCharacters()
{
	char ch;
	ifstream in_stream;

	int chars = 0;

	//Controleer of het bestand hier aanwezig is.
	in_stream.open(FILE);
	if (!in_stream) {
		cout << "Probleem bij openen file" << endl;
		exit(1);
	}

	//We willen niet controleren op .eof als condition voor de while loop. Als we namelijk het laatste character hebben gelezen dan denkt de streamer
	//nog steeds niet dat we aan het einde van de file zijn waardoor hij nog een keer door de loop heen gaat. 
	while (true) {
		in_stream.get(ch);
		if (in_stream.eof()) break;
		//std::cout << ch;
		chars++;
	}
	in_stream.close();

	return chars;
}

//Pakt de huidige positie in het bestand op basis van een nummer.
char getCharacterAtPosition(int number) {
	//variabele om het gelezen character in te stoppen
	char ch;

	//open en maak stream
	ifstream fileInput;
	fileInput.open(FILE);

	//kan stream niet open geef error en sluit.
	if (!fileInput) {
		cout << "Probleem bij openen input file" << endl;
		exit(1);
	}

	//lees het bestand tot aan het nummer dat we mee hebben gegeven.
	for (int i = 0; i < number; i++) {
		fileInput.get(ch);
	}
	
	//close stream en return het character.
	fileInput.close();
	return ch;
}

//hier schrijven we het input file weg in het output file.
int main() {
	//open en maak stream.
	ofstream out_stream;
	out_stream.open(OUT);

	//kan ik het bestand openen? zo ja niks aan de hand.
	if (!out_stream) {
		cout << "Probleem bij openen output file" << endl;
		exit(1);
	}

	//hier schrijven we het bestand achterstevoren weg in een andere file.
	for (int i = countCharacters(); i > 0; i--)
	{
		out_stream << getCharacterAtPosition(i);
		cout << getCharacterAtPosition(i);
	}

	//stream slutien.
	out_stream.close();

	//zorgen dat programma niet afsluit. dus vragen om input.
	char c;
	cin >> c;
	return 0;
}