#include <iostream>
#include <string>

using namespace std;

enum Rodzaj {Pub, Muzeum, Zabytek};

struct Atrakcja
{
	Rodzaj rodzaj;
	string nazwa;
	bool czynne;
};

int main()
{
	Atrakcja *ath= new Atrakcja;
	ath->rodzaj=Muzeum;
	ath->nazwa="Akademia Techniczno- Humanistyczna";
	ath->czynne=true;

	delete ath;

	return 0;
}

/*
Zad. 5
Utwórz typ Atrakcja o nastêpuj¹cych polach:
 Rodzaj (Pub, Muzeum, Zabytek – typ wyliczeniowy)
 Nazwa atrakcji (³añcuch znaków)
 Czynne (tak/nie)
I wskaŸnik do zmiennej tego typu. Dokonaj inicjalizacji poprzez przydzielenie pamiêci (new i delete).
*/