#include <iostream>
#include <string>

using namespace std;

int gnk=100;

class Bankomat
{
public:
    Bankomat(string);
    bool wyplac(double);
    bool wplac(double);
    double getStan() const;
    
private:
    int numer;
    string nazwisko;
    double stan;
};

Bankomat::Bankomat(string nazwa)
{
    this->nazwisko=nazwa;
    this->numer=gnk++;
    this->stan=100;
}

bool Bankomat::wyplac(double kwota)
{
    if(this->stan>=kwota)
    {
        this->stan-=kwota;
        return true;
    }
    return false;
}

bool Bankomat::wplac(double kwota)
{
    this->stan+=kwota;
    return true;
}

double Bankomat::getStan() const
{
    return this->stan;
}

int main()
{
    Bankomat *a=new Bankomat("Nazwisko");
    cout<<a->wyplac(60)<<endl;
    cout<<a->wplac(100)<<endl;
    cout<<a->getStan()<<endl;
    
    return 0;
}