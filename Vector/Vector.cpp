#include "Vector.h"
#include <iostream>

using namespace std;

ostream & operator << (ostream & out, const Vector & w)
{
		out<<"[";
		for(int i=0; i<w.n; i++)
				out<<w.w[i];
		
		out<<"]";
		return out;
}

Vector & Vector::operator = (const Vector & w)
{
		this->n=w.n;
		this->w=new double[this->n];
		
		for(int i=0; i<this->n; i++)
				this->w[i]=w.w[i];
		return *this;
}

Vector & Vector::operator = (double n)
{
		
		return *this;
}

Vector::Vector(int n)
{
		this->n=n;
		this->w=new double[n];
		
		for(int i=0; i<n; i++)
				this->w[i]=i;		
}

Vector::Vector(const Vector &orig)
{
		this->n=orig.n;
		this->w=new double[n];
		for(int i=0; i<n; i++)
				this->w[i]=orig.w[i];
}

Vector::~Vector()
{
		delete [] this->w;
}