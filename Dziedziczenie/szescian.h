#ifndef SZESCIAN_H
#define SZESCIAN_H

#include "kwadrat.h"

class Szescian : public Kwadrat
{
public:
	Szescian(int a, int b, int c);
	~Szescian();

private:
	int z;
};

#endif // !SZESCIAN_H

