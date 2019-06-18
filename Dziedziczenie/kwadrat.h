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

	// Hermetyzacja - zmienne dostêpne tylko dla funkcji klasy kwadrat.
	// Klasa szescian która dziedziczy po kwadracie mo¿e mieæ do nich dostêp tylko za pomoc¹ funkcji klasy kwadrat

	//friend class Szescian; //deklaracja przyjaŸni, klasa Szeœcian mia³a by bezpoœredni dostêp do x i y z klasy Kwadrat
private:
	double x;  
	double y;
};

#endif // !KWADRAT_H

