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
Zapisz w programie nast�puj�cy algorytm okre�laj�cy ile minut student sp�ni si� na kolokwium:
Je�li przyjedzie autobus numer 10 i nie b�dzie kontroli bilet�w to sp�nienie wyniesie 0.
Je�li przyjedzie autobus numer 10, ale b�dzie kontrola bilet�w student sp�ni si� 10 min.
W przypadku gdy przyjedzie autobus numer 1 sp�nienie wynosi 20 bez kontroli bilet�w i 30
w przeciwnym przypadku. Je�li przyjedzie autobus inny ni� 10 lub 1 student wr�ci do domu (sp�nienie wynosi 999 min)
Dane wej�ciowe: AutobusNr (liczba ca�kowita), KontrolaBiletow (tak/nie), dane wyj�ciowe:
sp�nienie studenta (liczba ca�kowita)
*/