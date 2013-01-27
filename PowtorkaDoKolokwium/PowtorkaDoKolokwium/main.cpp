#include <iostream>

using namespace std;

int main()
{
	int zmienna=10;
	int *wsk0=&zmienna;
	int *wsk1=wsk0;

	cout<<"adres zmiennej: "<<&zmienna<<endl;
	cout<<"wskaznik 0 pokazuje na "<<wsk0<<endl;
	cout<<"wskaznik 1 pokazuje na "<<wsk1<<endl;
	cout<<"adres wskaznika 0"<<&wsk0<<endl;
	cout<<"adres wskaznika 1"<<&wsk1<<endl;

	return 0;
}