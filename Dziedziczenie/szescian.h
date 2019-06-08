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

Szescian::Szescian(int a, int b, int c)
{
	Kwadrat(a, b);
	z = c;
}

Szescian::~Szescian()
{
}
#endif // !SZESCIAN_H

