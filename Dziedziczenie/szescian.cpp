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

double Szescian::ObliczPole()
{
	return (GetX() * GetY() * 2) + (GetX() * z * 2) + (GetY() * z * 2);
}

double Szescian::ObliczObjetosc()
{
	//poniewa� klasa kwadrat z kt�rej dziedziczymy x i y ma private nie mamy do nich bezpo�redniego dost�pu
	return  GetX() * GetY() * z;
	//return  x * y * z;  //mo�na by tak zrobi� gdyby klasa Kwadrat uzna�a klas� Szescian za klas� zaprzyja�nion�
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