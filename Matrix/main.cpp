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
		
    return 0;
}

