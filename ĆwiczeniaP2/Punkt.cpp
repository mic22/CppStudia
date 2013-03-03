#include "Punkt.h"
#include <iostream>
#include <math.h>

using namespace std;

Punkt::Punkt()
{
    x=0;
    y=0;
}

Punkt::Punkt(double x, double y)
{
    this->x=x;
    this->y=y;
}

Punkt::Punkt(const Punkt &obj)
{
    x=obj.x;
    y=obj.y;
}

Punkt::~Punkt() {}

void Punkt::setX(double x) { this->x=x; }
void Punkt::setY(double y) { this->y=y; }
double Punkt::getX() const { return x; }
double Punkt::getY() const { return y; }

void Punkt::display() const
{
    cout<<"("<< x <<", "<< y <<")"<<endl;
}
    
void Punkt::move(double dx, double dy)
{
    setX(x+dx);
    setY(x+dy);
}

double Punkt::distanceTo(const Punkt &punkt) const
{
    return sqrt(pow(punkt.getX()-x, 2)+pow(punkt.getY()-y ,2));
}