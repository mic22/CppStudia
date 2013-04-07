#include "Vector.h"
#include <iostream>

using namespace std;

ostream & operator << (ostream & out, const Vector & w)
{
		out<<"[ ";
		for(int i=0; i<w.n; i++)
				out<<w.w[i]<<" ";
		
		out<<"]";
		return out;
}

Vector operator + (const Vector & w1, const Vector & w2)
{
		Vector result=w1;
		
		if(w1.n==w2.n)
		{
				for(int i=0; i<w1.n; i++)
						result.w[i]+=w2.w[i];
		}
				
		return result;
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
		for(int i=0; i<this->n; i++)
				this->w[i]=n;
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