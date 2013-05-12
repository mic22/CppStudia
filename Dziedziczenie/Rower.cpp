#include "Rower.h"

Rower::Rower(int x, int y) : Pojazd(x, y)
{
}

Rower::~Rower()
{
}

void Rower::display()
{
		this->gotoxy(this->x, this->y); cout<<" tu"<<endl;
		this->gotoxy(this->x, this->y+1); cout<<"ro"<<endl;
		this->gotoxy(this->x, this->y+2); cout<<"wer"<<endl;		
}