#include <iostream>

using namespace std;

int main()
{
	char str[]="alibaba czupakabra allah akbar motherfucker";
	char *wsk=str;

	int i=0;
	int count=0;

	do
	{
		count = *(wsk+(i++))=='b' ? count+1 : count;
	}
	while(*(wsk+i)!='\0');
	
	cout<<count<<endl;

	return 0;
}