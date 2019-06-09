#include <iostream>
#include "kwadrat.h"
#include "szescian.h"
#include "trojkat.h"
#include "kolo.h"

using namespace std;


int main()
{
	cout << "Witam w programie dziedziczenie.";

	Kwadrat kwadracik(2, 5);
	Szescian szescianik(1, 5, 6);


	do
	{
		cout << "\n Press the Enter key to continue.";

	} while (cin.get() != '\n');
	
	return 0;
}