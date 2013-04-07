/*
 klasa macierz
 * int w,k;
 * double **mac
 * macierz(w,k)
 * macierz(kopiujacy)
 * desktruktor
 * display()
 */

#include <iostream>

#include "Matrix.h"

using namespace std;

int main()
{
    Matrix *tab=new Matrix(4, 4);
    tab->insert(0, 0, 10.56);
    tab->insert(1, 1, 69);
    tab->display();

    Matrix *tab2=new Matrix(4, 4);
    tab2->insert(0, 0, -0.56);
    tab2->insert(1, 1, -9);

    double row[4]={1,2,3,4};
    tab2->insert(2, row);
		
    tab2->display();

    Matrix *tab3=tab->add(tab2);
    tab3->display();
		
    return 0;
}

