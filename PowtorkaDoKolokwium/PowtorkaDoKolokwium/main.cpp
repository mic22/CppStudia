#include <iostream>

using namespace std;

void wypelnij(int *tab, bool typ=true)
{
	if(typ)
	{
		int *wsk=tab;
		for(int i=0; i<10; i++)
		{
			*(wsk+i)=i-10;
		}
	}
	else
	{
		int *wsk=&tab[9];
		for(int i=9; i>=0; i--)
		{
			*(wsk+i)=i-10;
		}
	}
}

int main()
{
	int a[10];
	wypelnij(a);
	wypelnij(a, false);
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}