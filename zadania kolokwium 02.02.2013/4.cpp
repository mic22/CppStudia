#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int licz_dodatnie(int a[][3], int k, int l)
{
	int count=0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if(a[i][j]>0)
				count++;
		}
	}
	return count;
}

int licz_ujemne(int a[][3], int k, int l)
{
	int count=0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if(a[i][j]<0)
				count++;
		}
	}
	return count;
}

int min(int a[][3], int k, int l)
{
	int m=INT_MAX;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if(a[i][j]<m)
				m=a[i][j];
		}
	}
	return m;
}

int main()
{
	int tab[4][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,-99}
	};

	cout<<licz_dodatnie(tab, 4, 3)<<endl;
	cout<<licz_ujemne(tab, 4, 3)<<endl;
	cout<<min(tab, 4, 3)<<endl;

	return 0;
}

/*
Dla tablicy dwuwymiarowej 4x3 z wartoœciami typu ca³kowitego napisz funkcje:
a) wyznaczaj¹c¹ liczbê elementów dodatnich
b) wyznaczaj¹c¹ liczbê elementów ujemnych
c) wyznaczaj¹c¹ wartoœæ minimaln¹ w tablicy
*/