#ifndef PUNKT_H
#define PUNKT_H

class Punkt
{
private:
    double x, y;

public:
    Punkt();
    Punkt(double, double);
    Punkt(const Punkt&);
    ~Punkt();
    void setX(double);
    void setY(double);
    double getX() const;
    double getY() const;
    void display() const;
};

#endif