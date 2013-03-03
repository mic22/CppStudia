#include "Punkt.h"
#include <iostream>

using namespace std;

Punkt::Punkt()
{
    this->x=0;
    this->y=0;
}

Punkt::Punkt(double x, double y)
{
    this->x=x;
    this->y=y;
}

Punkt::Punkt(const Punkt &obj)
{
    this->x=obj.x;
    this->y=obj.y;
}

Punkt::~Punkt() {}

void Punkt::setX(double x) { this->x=x; }
void Punkt::setY(double y) { this->y=y; }
double Punkt::getX() const { return this->x; }
double Punkt::getY() const { return this->y; }

void Punkt::display() const
{
    cout<<"("<<this->x<<", "<<this->y<<")"<<endl;
}