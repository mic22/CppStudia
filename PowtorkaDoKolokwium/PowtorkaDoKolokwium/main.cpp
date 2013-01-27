#include <iostream>

using namespace std;

int sum(int *tab, int length)
{
	int sum=0;
	for(int i=0; i<length; i++)
		sum+=*(tab+i);
	return sum;
}

int main()
{
	int a[4]={1,2,3,4};
	cout<<sum(a, 4)<<endl;

	return 0;
}