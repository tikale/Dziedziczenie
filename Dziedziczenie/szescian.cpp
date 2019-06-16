#include "szescian.h"

Szescian::Szescian(int a, int b, int c)
{
	Kwadrat::SetX(a);
	Kwadrat::SetY(b);
	z = c;
	pole = ObliczPole();
	Objetosc = ObliczObjetosc();
	WypiszDane();
}

int Szescian::ObliczPole()
{
	return (GetX() * GetY() * 2) + (GetX() * z * 2) + (GetY() * z * 2);
}

int Szescian::ObliczObjetosc()
{
	return  GetX() * GetY() * z;
}

void Szescian::WypiszDane()
{
	cout << "Kwadrat !\n";
	cout << "Dlugosc boku x = ";
	cout << GetX();
	cout << "\nDlugosc boku y = ";
	cout << GetY();
	cout << "\nObjetosc wynosi ";
	cout << Objetosc;
	cout << "\nPole powieszchni wynosi ";
	cout << pole;
	cout << "\n\n";
 } 

Szescian::~Szescian()
{
}