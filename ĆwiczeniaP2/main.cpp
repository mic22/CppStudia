#include <iostream>
#include "Punkt.h"

using namespace std;

int main()
{
    Punkt p1;
    
    Punkt p2(3, 2);
    
    Punkt p3(p2);
    
    Punkt p4 = p1;
    
    p1.display();
    p2.display();
    p3.display();
    p4.display();
    
    p4.setX(9.21);
    p4.display();
    
    cout<<p2.getY()<<endl;
    
    p2.setX(2);
    p2.move(1, -1);
    p1.display();
    p2.display();
    cout<<"Odleglosc: "<<p1.distanceTo(p2);
    
    return 0;
}

