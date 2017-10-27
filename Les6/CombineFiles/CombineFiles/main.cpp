#include <iostream>
#include <fstream>
using namespace std;

#define INFILE1 "D:\\SCHOOL\\INOOP\\INOOP\\Les6\\CombineFiles\\infile1.txt"
#define INFILE2 "D:\\SCHOOL\\INOOP\\INOOP\\Les6\\CombineFiles\\infile2.txt"
#define OUTFILE "D:\\SCHOOL\\INOOP\\INOOP\\Les6\\CombineFiles\\outfile.txt"



int main()
{
	//2 bools om per file bij te houden of we nog mogen lezen
	bool noMoreRead1 = false;
	bool noMoreRead2 = false;

	//om het huidige character in op te slaan
	char ch;

	//maak en open alle streams
	ifstream file1Input;
	ifstream file2Input;
	ofstream fileOutput;

	file1Input.open(INFILE1);
	file2Input.open(INFILE2);
	fileOutput.open(OUTFILE);

	//we willen eerst per file checken of we nog mogen lezen of niet. Vervolgens gebruiken we de get functie. Als we aan het einde
	//van de file zijn maken we noMoreRead true. Zo niet mogen we lezen en het character in het out bestand gooien.
	while (true)
	{
		if (!noMoreRead1)
		{
			file1Input.get(ch);
			if (file1Input.eof())
			{
				noMoreRead1 = true;
			}
			else
			{
				fileOutput << ch;
				cout << ch;
			}
		}
		if (!noMoreRead2)
		{
			file2Input.get(ch);
			if (file2Input.eof())
			{
				noMoreRead2 = true;
			}
			else
			{
				fileOutput << ch;
				cout << ch;
			}
		}
		if (noMoreRead1 && noMoreRead2)
		{
			break;
		}
	}

	//sluit alle streams
	file1Input.close();
	file2Input.close();
	fileOutput.close();


	char c;
	cin >> c;
	return 0;
}