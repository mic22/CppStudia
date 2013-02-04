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
	Node *at(int); //odwolanie do elementu na konkretnej pozycji
	Node *at(); //odwolanie do ostatniego elementu
	int static i; //przechwouje aktualny rozmiar struktury
	int inc(); //tworzy kolejne element listy i zwraca aktualny rozmiar
	Node();
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

	zwierzatka->at(2)->data.nazwa="Walen"; //modyfikacja danych 3 elementu struktury

	for(int k=0; k<=Node::i; k++) //przejœcie po elementach struktury i wyswietlenie danych
	{
		tmp=&zwierzatka->at(k)->data;
			cout<<k<<". "<<tmp->nazwa<<" (wiek: "<<tmp->wiek<<", plec: "<<(tmp->plec?"M":"F")<<")"<<endl;
	}

	return 0;
}

int Node::i=0;

Node *Node::at() { return this->at(Node::i); }

Node *Node::at(int a)
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
	this->at(Node::i)->next=new Node;
	return ++Node::i;
}

Node::Node() { this->next=nullptr; } //do czasu wykonania ::inc() pole ::next nie wskazuje nastêpnika 