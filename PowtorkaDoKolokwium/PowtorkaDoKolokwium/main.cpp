#include <iostream>

using namespace std;

int main()
{
	int a=1;
	int *w1, *w2, *w3, *w4;

	w1=&a;
	w2=&a;
	w3=&a;
	w4=&a;

	// #2

	w1=&a;
	w2=w1;
	w3=w2;
	w4=w3;

	return 0;
}