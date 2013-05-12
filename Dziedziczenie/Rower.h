#ifndef ROWER_H
#define	ROWER_H
#include <iostream>
#include "Pojazd.h"

using namespace std;

class Rower : public Pojazd {
public:
		Rower(int, int);
		virtual ~Rower();
		virtual void display();
private:

};

#endif	/* ROWER_H */

