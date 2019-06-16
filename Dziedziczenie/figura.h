#ifndef FIGURA_H 
#define FIGURA_H

#include <iostream>

using namespace std;

class Figura    //klasa abstrakcyjna
{
protected:
	//Figura();
	//Figura(int PoleFig, int ObwodFig);
	//~Figura();

	int pole;
	int obwod;
	virtual int ObliczPole() = 0;
	virtual int ObliczObwod() = 0;
	virtual void WypiszDane() {};
};

#endif
