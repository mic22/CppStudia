#include "Pojazd.h"

Pojazd::Pojazd(int x, int y)
{
		this->x=x;
		this->y=y;
}

Pojazd::~Pojazd()
{
}

void Pojazd::move(int dx, int dy)
{
		this->x+=dx;
		this->y+=dy;
}