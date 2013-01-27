#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	a=1;
	b=5;
	c=8;
	int *wsk;

	wsk=&a;
	*wsk+=1;

	wsk=&b;
	*wsk-=5;

	wsk=&c;
	*wsk/=2;

	cout<<a<<b<<c<<endl;

	return 0;
}