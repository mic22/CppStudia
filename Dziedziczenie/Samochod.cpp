#include "Samochod.h"

Samochod::Samochod(int x, int y) : Pojazd(x, y)
{
}

Samochod::~Samochod()
{
}

void Samochod::display()
{
		this->gotoxy(this->x, this->y); cout<<"    __  "<<endl;
		this->gotoxy(this->x, this->y+1); cout<<"_/     \\_ "<<endl;
		this->gotoxy(this->x, this->y+2); cout<<"8|o---o|"<<endl;		
}

void Samochod::move(int dx, int dy)
{
		this->x+=dx*2;
		this->y+=dy*2;
}