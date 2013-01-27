#include <iostream>

using namespace std;

int main()
{
	const int size=7;
	float tab[size], tab1[size];
	float *wsk=tab;
	
	//wype³nianie tablicy tab
	for(int i=0; i<size; i++)
		*(wsk+i)=i;
	
	//kopiowanie do tab1
	for(int i=0; i<size; i++)
		tab1[i]=*(wsk+i);

	//printowanie tab1
	wsk=tab1;
	for(int i=0; i<size; i++)
		cout<<*(wsk+i)<<" ";
	cout<<endl;

	return 0;
}