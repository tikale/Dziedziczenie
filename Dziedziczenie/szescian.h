#ifndef SZESCIAN_H
#define SZESCIAN_H

#include "kwadrat.h"

class Szescian : public Kwadrat
{
protected:
	int z;
	int Objetosc;

public:
	Szescian(int a, int b, int c);
	~Szescian();
	int ObliczPole();
	int ObliczObwod();
	void WypiszDane();

};

#endif // !SZESCIAN_H

