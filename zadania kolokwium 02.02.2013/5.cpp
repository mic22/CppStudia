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
Utw�rz typ Atrakcja o nast�puj�cych polach:
 Rodzaj (Pub, Muzeum, Zabytek � typ wyliczeniowy)
 Nazwa atrakcji (�a�cuch znak�w)
 Czynne (tak/nie)
I wska�nik do zmiennej tego typu. Dokonaj inicjalizacji poprzez przydzielenie pami�ci (new i delete).
*/