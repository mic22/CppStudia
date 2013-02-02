#include <iostream>
#include <string>

using namespace std;

int spoznienie(int AutobusNr, bool KontrolaBiletow)
{
	int sp=0;
	switch(AutobusNr)
	{
	case 10:
		sp=KontrolaBiletow ? 10 : 0;
		break;
	case 1:
		sp=KontrolaBiletow ? 30 : 20;
		break;
	default:
		sp=999;
	}
	return sp;
}

int main()
{
	cout<<spoznienie(10, true)<<endl;
	return 0;
}

/*
Zad. 2
Zapisz w programie nastêpuj¹cy algorytm okreœlaj¹cy ile minut student spóŸni siê na kolokwium:
Jeœli przyjedzie autobus numer 10 i nie bêdzie kontroli biletów to spóŸnienie wyniesie 0.
Jeœli przyjedzie autobus numer 10, ale bêdzie kontrola biletów student spóŸni siê 10 min.
W przypadku gdy przyjedzie autobus numer 1 spóŸnienie wynosi 20 bez kontroli biletów i 30
w przeciwnym przypadku. Jeœli przyjedzie autobus inny ni¿ 10 lub 1 student wróci do domu (spóŸnienie wynosi 999 min)
Dane wejœciowe: AutobusNr (liczba ca³kowita), KontrolaBiletow (tak/nie), dane wyjœciowe:
spóŸnienie studenta (liczba ca³kowita)
*/