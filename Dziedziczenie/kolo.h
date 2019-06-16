#ifndef KOLO_H
#define KOLO_H

#include "figura.h"

class Kolo : public Figura
{
public:
	Kolo(int r);
	Kolo();
	~Kolo();
	int ObliczPole();
	int ObliczObwod();
	void WypiszDane();

protected:
	int r;
	const double pi = 3.141592653589;

};

#endif // !KOLO_H

