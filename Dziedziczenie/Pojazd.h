#ifndef POJAZD_H
#define	POJAZD_H

class Pojazd {
public:
		Pojazd(int, int);
		virtual ~Pojazd();
		virtual void move(int, int);
		virtual void display() = 0;
protected:
		int x, y;
		void gotoxy(int x, int y) { /*jakies przesuwanie kursora*/ }
};

#endif	/* POJAZD_H */

