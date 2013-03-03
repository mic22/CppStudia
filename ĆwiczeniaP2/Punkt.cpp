#include "Punkt.h"

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

Punkt::~Punkt()
{

}