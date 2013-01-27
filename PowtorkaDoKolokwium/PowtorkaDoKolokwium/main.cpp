#include <iostream>

using namespace std;

int main()
{
	float tab[7];
	float *wsk=tab;
	for(int i=0; i<sizeof(tab)/sizeof(float); i++)
		*(wsk+i)=5+i;

	for(int i=0; i<sizeof(tab)/sizeof(float); i++)
		cout<<*(wsk+i)<<" ";
	cout<<endl;

	return 0;
}