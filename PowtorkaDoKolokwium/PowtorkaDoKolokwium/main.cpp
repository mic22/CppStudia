#include <iostream>

using namespace std;

int main()
{
	int tab1[3], tab2[3], tab3[3], a[9];
	int *wsk=tab1;
	int *wsk1=a;

	int j=0;
	for(int i=0; i<9; i++)
	{
		if(i==3)
		{
			wsk=tab2;
			j=0;
		}
		else if(i==6)
		{
			wsk=tab3;
			j=0;
		}

		*(wsk+j)=10*(i+1);

		*(wsk1+j)=*(wsk+j);

		cout<<*(wsk1+j)<<" ";

		j++;
	}
	cout<<endl;

	return 0;
}