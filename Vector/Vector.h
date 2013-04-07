#ifndef VECTOR_H
#define	VECTOR_H

#include <iostream>

using namespace std;

class Vector
{
public:
		Vector(void) {}
		Vector(int n);
		Vector(const Vector &);
		virtual ~Vector();
		Vector & operator = (const Vector &);
		Vector & operator = (double);
		friend Vector operator + (const Vector &, const Vector &);
		friend ostream & operator << (ostream &, const Vector &);
private:
		int n;
		double *w;
};

#endif	/* VECTOR_H */

