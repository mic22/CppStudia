#ifndef SAMOCHOD_H
#define	SAMOCHOD_H
#include <iostream>
#include "Pojazd.h"

using namespace std;

class Samochod : public Pojazd {
public:
		Samochod(int, int);
		virtual ~Samochod();
		virtual void display();
		virtual void move(int, int);
private:

};

#endif	/* SAMOCHOD_H */

