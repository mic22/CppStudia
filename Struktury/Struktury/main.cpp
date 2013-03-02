#include <iostream>
#include <string>

using namespace std;

/*
 * zmodyfikowany program z wyk³adu do obs³ugi struktury danych
 * dla przyk³adu przechowuje zwierz¹tka :P
 */

struct Zwierzatko
{
	string nazwa;
	int wiek;
	bool plec;
};

struct Node
{
	//pola danych
	Zwierzatko data;

	//pola obs³ugi struktury danych
	Node *next;
	Node *at(const int); //odwolanie do elementu na konkretnej pozycji
	Node *at(); //odwolanie do ostatniego elementu
	unsigned int max; //przechwouje aktualny rozmiar struktury
	int inc(); //tworzy kolejne element listy i zwraca aktualny rozmiar
	Node();
    int del(const int); //usuwa elementy poczawszy od wskazanego indeksem do konca
};

int main()
{
	Node *zwierzatka=new Node; //inicjalizacja struktury
	Zwierzatko *tmp; //wskaŸnik pomocniczy

	tmp=&zwierzatka->at()->data; //wskazanie na dane aktualnie ostatniego elementu
		tmp->nazwa="Pies"; //modyfikacja zawartosc
		tmp->wiek=3;
		tmp->plec=true;
	zwierzatka->inc(); //inicjalizacja kolejnego elementu struktury

	tmp=&zwierzatka->at()->data;
		tmp->nazwa="Orzel";
		tmp->wiek=1;
		tmp->plec=true;
	zwierzatka->inc();

	tmp=&zwierzatka->at()->data;
		tmp->nazwa="Wieloryb";
		tmp->wiek=16;
		tmp->plec=false;

    bool b=true;
    while(b)
    {
        zwierzatka->inc();
        tmp=&zwierzatka->at()->data;
        cout<<"Podaj nazwe (str), wiek (int), plec (bool):"<<endl;
        cin>>tmp->nazwa>>tmp->wiek>>tmp->plec;
        cout<<"Kontynuowac wprowadzanie? (bool): ";
        cin>>b;
    }

	zwierzatka->at(2)->data.nazwa="Walen"; //modyfikacja danych 3 elementu struktury

    zwierzatka->del(2); //usuwanie (c, this->max)
        
	for(int k=0; k<=zwierzatka->max; k++) //przejœcie po elementach struktury i wyswietlenie danych
	{
		tmp=&zwierzatka->at(k)->data;
			cout<<k+1<<". "<<tmp->nazwa<<" (wiek: "<<tmp->wiek<<", plec: "<<(tmp->plec?"M":"F")<<")"<<endl;
	}

	return 0;
}

Node *Node::at() { return this->at(this->max); }

Node *Node::at(const int a)
{
	Node *tmp=this;

	if(a==0)
		return tmp;

	int j=0;
	while(j<=a-1)
	{
		tmp=tmp->next;
		j++;
	}
	return tmp;
}

int Node::inc()
{
	this->at(this->max)->next=new Node;
	return ++this->max;
}

Node::Node() { this->next=nullptr; } //do czasu wykonania ::inc() pole ::next nie wskazuje nastêpnika

int Node::del(const int a)
{
	delete this->at(this->max)->next;
    for(int i=this->max; i>a; i--, this->max--)
        delete this->at(this->max);
	return this->max;
}