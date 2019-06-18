#ifndef TROJKAT_H
#define TROJKAT_H

#include "figura.h"
#include  <cmath>

class Trojkat : public Figura
{
public:
	Trojkat(double a);
	Trojkat();
	~Trojkat();
	double ObliczPole();
	double ObliczObwod();
	void WypiszDane();

protected:
	double a;

};

#endif // !TROJKAT_H

