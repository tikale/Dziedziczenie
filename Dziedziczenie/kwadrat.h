#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"

class Kwadrat : public Figura
{
public:
	Kwadrat(int a, int b);
	~Kwadrat();

private:
	int x;
	int y;
};

Kwadrat::Kwadrat(int a, int b)
{
	x = a;
	y = b;
}

Kwadrat::~Kwadrat()
{
}

#endif // !KWADRAT_H

