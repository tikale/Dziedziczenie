#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"

class Kwadrat : public Figura
{
public:
	Kwadrat();
	Kwadrat(int a, int b);
	~Kwadrat();

private:
	int x;
	int y;
};

#endif // !KWADRAT_H

