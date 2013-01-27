#include <iostream>

using namespace std;

int main()
{
	int a=1;
	int b;
	int *w1, *w2, *w3, *w4, *w5;
	
	w1=&a;
	w2=&a;
	w3=w2;
	w5=w3;
	w4=w5;
	b=*w4;

	cout<<b<<endl;

	return 0;
}