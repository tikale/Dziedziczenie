#include "kwadrat.h"

Kwadrat::Kwadrat()
{
	x = 0;
	y = 0;
}

Kwadrat::Kwadrat(int a, int b)
{
	x = a;
	y = b;
	//Figura::Figura(a * b, 2 * a + 2 * b); //Nie mo¿na utworzyæ instancji klasy abstrakcyjnej
	pole = ObliczPole();
	obwod = ObliczObwod();
	WypiszDane();
}


double Kwadrat::ObliczPole()
{
	return x * y;
}

double Kwadrat::ObliczObwod()
{
	return 2 * x + 2 * y;
}

void Kwadrat::WypiszDane()
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

Kwadrat::~Kwadrat()
{
}

void Kwadrat::SetX(double OsX)
{
	x = OsX;
}

void Kwadrat::SetY(double OsY)
{
	y = OsY;
}

double Kwadrat::GetX()
{
	return x;
}

double Kwadrat::GetY()
{
	return y;
}