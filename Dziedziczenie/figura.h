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

	double pole = 0;
	double obwod = 0;
	virtual double ObliczPole() = 0;
	virtual double ObliczObwod() = 0;
	virtual void WypiszDane() {};
};

#endif
