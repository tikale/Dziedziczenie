#ifndef KOLO_H
#define KOLO_H

#include "figura.h"

class Kolo : public Figura
{
public:
	Kolo(double r);
	Kolo();
	~Kolo();
	double ObliczPole();
	double ObliczObwod();
	void WypiszDane();

protected:
	double r;
	const double pi = 3.141592653589;

};

#endif // !KOLO_H

