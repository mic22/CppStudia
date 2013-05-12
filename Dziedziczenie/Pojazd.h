#ifndef POJAZD_H
#define	POJAZD_H

class Pojazd {
public:
		Pojazd(int, int);
		Pojazd(const Pojazd& orig);
		virtual ~Pojazd();
		virtual void move(int, int);
		virtual void display() = 0;
private:
		int x, y;
};

#endif	/* POJAZD_H */

