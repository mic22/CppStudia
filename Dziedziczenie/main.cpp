#include <iostream>
#include "Pojazd.h"
#include "Samochod.h"
#include "Rower.h"

using namespace std;

int main()
{
		Pojazd *pojazd;
		Samochod samochod(10, 10);
		Rower rower(1,1);
		
		int wybor;
		cout<<"Wybierz pojazd [1, 2]: "<<endl;
		cin>>wybor;
		
		switch(wybor)
		{
				case 2:
						pojazd=&rower;
						break;
				default:
						pojazd=&samochod;
		}
		
		pojazd->display();
		pojazd->move(5, 5);
		pojazd->display();
		
		return 0;
}

//zadanie Łodz
//+ klasa amfibia