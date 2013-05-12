#include "Pojazd.h"

Pojazd::Pojazd(int x, int y)
{
		this->x=x;
		this->y=y;
}

Pojazd::Pojazd(const Pojazd& orig) {
}

Pojazd::~Pojazd() {
}

Pojazd::move(int dx, int dy)
{
		this->x+=dx;
		this->y+=dy;
}