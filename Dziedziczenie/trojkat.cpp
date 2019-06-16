#include "trojkat.h"

Trojkat::Trojkat(int bok)
{
	a = bok;
	pole = ObliczPole();
	obwod = ObliczObwod();
	WypiszDane();
}

Trojkat::Trojkat()
{
}

Trojkat::~Trojkat()
{
}

int Trojkat::ObliczPole()
{
	return (a * a * sqrt(3)) / 4 ;
}

int Trojkat::ObliczObwod()
{
	return 3 * a;
}

void Trojkat::WypiszDane()
{
	cout << "Trojkat rownoboczny !\n";
	cout << "Dlugosc boku a = ";
	cout << a;
	cout << "\nObwod wynosi ";
	cout << obwod;
	cout << "\nPole powieszchni wynosi ";
	cout << pole;
	cout << "\n\n";
}