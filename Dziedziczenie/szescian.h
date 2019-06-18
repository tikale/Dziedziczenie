#ifndef SZESCIAN_H
#define SZESCIAN_H

#include "kwadrat.h"

class Szescian : public Kwadrat
{
protected:
	int z;
	double Objetosc;

public:
	Szescian(int a, int b, int c);
	~Szescian();
	double ObliczPole();
	double ObliczObjetosc();
	void WypiszDane();

};

#endif // !SZESCIAN_H

