#include <iostream>
#include <string>

using namespace std;

/*
 * zmodyfikowany program z wykładu do obsługi struktury danych
 * dla przykładu przechowuje zwierzątka :P
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

	//pola obsługi struktury danych
	Node *next;
	Node *at(const int); //odwolanie do elementu na konkretnej pozycji
	Node *at(); //odwolanie do ostatniego elementu
	unsigned int max; //przechwouje aktualny rozmiar struktury
	int inc(); //tworzy kolejne element listy i zwraca aktualny rozmia
        int del(const int); //usuwa elementy poczawszy od wskazanego indeksem do konca
};

int main()
{
	Node *zwierzatka=new Node; //inicjalizacja struktury
	Zwierzatko *tmp; //wskaźnik pomocniczy

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

        int c;
        cout<<"usun: ";
        cin>>c;
        zwierzatka->del(c); //usuwanie (c, this->max)

        b=true;
        while(b)
        {
            zwierzatka->inc();
            tmp=&zwierzatka->at()->data;
            cout<<"Podaj nazwe (str), wiek (int), plec (bool):"<<endl;
            cin>>tmp->nazwa>>tmp->wiek>>tmp->plec;
            cout<<"Kontynuowac wprowadzanie? (bool): ";
            cin>>b;
        }

	for(int k=0; k<=zwierzatka->max; k++) //przejście po elementach struktury i wyswietlenie danych
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

int Node::del(const int a)
{
    delete this->at(this->max)->next;
    for(int i=this->max; i>a; i--, this->max--)
        delete this->at(this->max);
}

Node::Node() { this->next=NULL; } //do czasu wykonania ::inc() pole ::next nie wskazuje następnika