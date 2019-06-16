#include "szescian.h"

Szescian::Szescian(int a, int b, int c)
{
	Kwadrat::SetX(a);
	Kwadrat::SetY(b);
	z = c;
}

int Szescian::ObliczPole()
{
	return x * y;
}

int Szescian::ObliczObwod()
{
	return 2 * x + 2 * y;
}

void Szescian::WypiszDane()
{
	cout << "Kwadrat !\n";
	cout << "Dlugosc boku x = ";
	cout << x;
	cout << "\nDlugosc boku y = ";
	cout << y;
	cout << "\nObwod wynosi ";
	cout << obwod;
	cout << "\nPole powieszchni wynosi ";
	cout << pole;
	cout << "\n\n";
 } 

Szescian::~Szescian()
{
}