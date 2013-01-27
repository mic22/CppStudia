#include <iostream>

using namespace std;

int in_array(int *tab, int length, int needle)
{
	for(int i=0; i<length; i++)
	{
		if(*(tab+i)==needle)
			return i;
		else
			continue;
	}
	return -1;
}

int main()
{
	int a[4]={1,2,3,4};
	cout<<in_array(a, 4, 2)<<endl;

	return 0;
}