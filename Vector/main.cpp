#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
		Vector w1(10);
		Vector w2 = w1;
		Vector w3;
		
		w3=w1;
		
		cout<<w1<<endl;
		cout<<w2<<endl;
		cout<<w3<<endl;
		
		return 0;
}

