#include <iostream>
#include <string>

using namespace std;

const char aaa[]="C++ 2012/2013";

enum Planeta {Merkury, Wenus, Ziemia, Mars};

string *str = new string;

struct Kolor
{
	unsigned int R, G, B;
};

string aa(char a, int b[], double zm)
{
	return "fdsfsdfsd";
}

int main()
{
	double dbl=-125.75;

	Planeta cnieb=Wenus;

	Kolor tlo;
	tlo.R=150;
	tlo.G=200;
	tlo.B=109;

	delete str;

	//tu mam pokopane
	string (*g())(char, int, double);
	int b[1]={1};
	g()=&aa('a', b, 2.5);
	cout<<*g<<endl;

	return 0;
}

/*
c) typ wyliczeniowy o nazwie Planeta z elementami: Merkury, Wenus, Ziemia, Mars. Zdefiniuj zmienn� lokaln� w funkcji
main typu Planeta zainicjalizowan� warto�ci� Wenus,
d) struktur� o nazwie Kolor z polami: R, G, B. Zdefiniuj zmienn� lokaln� w funkcji main typu Kolor i 
wpisz dowolne warto�ci do poszczeg�lnych p�l.
e) wska�nik do typu string jako zmienna globalna i zainicjalizuj go poprzez przydzielenie pami�ci
f) wska�nik do funkcji pasuj�cy do prototypu: string g(char a, int b[], double zm)
*/