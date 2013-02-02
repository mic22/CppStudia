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
c) typ wyliczeniowy o nazwie Planeta z elementami: Merkury, Wenus, Ziemia, Mars. Zdefiniuj zmienn¹ lokaln¹ w funkcji
main typu Planeta zainicjalizowan¹ wartoœci¹ Wenus,
d) strukturê o nazwie Kolor z polami: R, G, B. Zdefiniuj zmienn¹ lokaln¹ w funkcji main typu Kolor i 
wpisz dowolne wartoœci do poszczególnych pól.
e) wskaŸnik do typu string jako zmienna globalna i zainicjalizuj go poprzez przydzielenie pamiêci
f) wskaŸnik do funkcji pasuj¹cy do prototypu: string g(char a, int b[], double zm)
*/