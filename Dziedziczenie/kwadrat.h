#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"

class Kwadrat : public Figura
{
public:
	Kwadrat();
	Kwadrat(int a, int b);
	~Kwadrat();
	void SetX(double x);
	void SetY(double y);
	double GetX();
	double GetY();
	double ObliczPole();
	double ObliczObwod();
	void WypiszDane();

	// Hermetyzacja - zmienne dost�pne tylko dla funkcji klasy kwadrat.
	// Klasa szescian kt�ra dziedziczy po kwadracie mo�e mie� do nich dost�p tylko za pomoc� funkcji klasy kwadrat

	//friend class Szescian; //deklaracja przyja�ni, klasa Sze�cian mia�a by bezpo�redni dost�p do x i y z klasy Kwadrat
private:
	double x;  
	double y;
};

#endif // !KWADRAT_H

