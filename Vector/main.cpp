#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
		Vector w1(10);
		Vector w2 = w1;
		Vector w3;
		
		w3=w1;
		
		w1=4;
		
		Vector w4;
		w4=w3+w1;
		
		w4[4]=-22.091;
		
		w4[15]=69;
		
		w4[-2]-5;
		
		cout<<w1<<endl;
		cout<<w2<<endl;
		cout<<w3<<endl;
		cout<<w4<<endl;
		
		return 0;
}

