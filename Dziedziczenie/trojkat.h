#ifndef TROJKAT_H
#define TROJKAT_H

#include "figura.h"
#include  <cmath>

class Trojkat : public Figura
{
public:
	Trojkat(int a);
	Trojkat();
	~Trojkat();
	int ObliczPole();
	int ObliczObwod();
	void WypiszDane();

protected:
	int a;

};

#endif // !TROJKAT_H

