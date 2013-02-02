#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double y)
{
	double s1=0;
	for (int i = 20; i > 10; i-=3)
	{
		s1+=(log10(abs(x) + pow(y, i)))/tan(y/pow(i, 2));
	}
	
	double i1=1;
	for (int k = 8; k < 14; k++)
	{
		i1*=cos((x+pow(k, y))/log(abs(x-y)));
	}
	
	double s2=0;
	for (int j = 100; j > -1; j--)
	{
		s2+=(j/(pow(M_PI, 3)*M_E)) + exp(x*y) + pow(8, 1/(double)j);
	}

	return s1+i1+s2-(1/3.0);
}

int main()
{
	while(true)
	{
		double x,y;
		cin>>x>>y;
		cout<<f(x,y)<<endl;
	}

	/*
	cout<<f(1,1)<<endl;
	cout<<f(2,2)<<endl;
	cout<<f(3,3)<<endl;
	cout<<f(4,4)<<endl;
	cout<<f(5,5)<<endl;
	*/
	return 0;
}

/*

*/