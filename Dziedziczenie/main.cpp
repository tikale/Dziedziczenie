#include <iostream>
#include "kwadrat.h"
#include "szescian.h"
#include "trojkat.h"
#include "kolo.h"

using namespace std;


int main()
{
	cout << "Witam w programie dziedziczenie.\n\n";

	//Figura cos(10, 12);  //obiekt typu klasy abstrakcyjnej "Figura" jest niedozwolony
	Kwadrat kwadracik(2, 5);
	Szescian szescianik(1, 5, 6);
	Trojkat trojkacik(7);
	Kolo koleczko(12);

	

	do
	{
		cout << "\n Press the Enter key to continue.";

	} while (cin.get() != '\n');
	
	return 0;
}