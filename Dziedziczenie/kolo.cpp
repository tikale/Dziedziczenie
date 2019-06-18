#include "kolo.h"

Kolo::Kolo(int promien)
{
	r = promien;
	pole = ObliczPole();
	obwod = ObliczObwod();
	WypiszDane();
}

Kolo::Kolo()
{
}

Kolo::~Kolo()
{
}

double Kolo::ObliczPole()
{
	return pi * r * r;
}

double Kolo::ObliczObwod()
{
	return 2 * pi * r;
}

void Kolo::WypiszDane()
{
	cout << "Kolo !\n";
	cout << "Dlugosc promienia = ";
	cout << r;
	cout << "\nObwod wynosi ";
	cout << obwod;
	cout << "\nPole powieszchni wynosi ";
	cout << pole;
	cout << "\n\n";
}