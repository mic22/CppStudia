// scalanie.cpp : main project file.

#include "stdafx.h"
#include "time.h"
#include<iostream>

using namespace std;
unsigned  int const n=10000;


void boubble_sort(  unsigned long int  n,float *  a)
  {
	  unsigned  int l,k;
          float p;
	  l=n;
		do 
	    { 
	      k=0;
	      l=l-1;
	       for (unsigned  int i=1;i<=l;i++)
	        {
		       if (a[i]>a[i+1]) 
		        { 
			   p=a[i];a[i]=a[i+1];a[i+1]=p;k=k+1;
		        }
	        }
		}
	        while	(k!=0);
} 
void insert_sort(  unsigned  int n,float * a)
  {
	  unsigned  int l,p,k,s;
	  float  w=0;
	  a[0]=w;
	  for (unsigned int i=2;i<=n;i++)
	  {
		  float y=a[i];
		  l=0;
		  p=i-1;
		do 
	     { 
        	s=(l+p+1) / 2;
		    if (a[s]<=y) l=s; else p=s-1;
	     }
	    while	(l!=p);
		k=l;
		for (unsigned int j=i-1;j>=k+1;j--) a[j+1]=a[j];
		a[k+1]=y;
	  }
} 


void scalaj(unsigned  int l,unsigned  int s, unsigned  int p,float * a)
{
		

	        float  z[n+1];
		unsigned  int m,k,i,j;
		m=l;i=l;j=s;
		do
		{
			if (a[i]<=a[j])
			{ z[m]=a[i];i=i+1;}
			else
			{z[m]=a[j];j=j+1;}
			m=m+1;
		}
		while(i<s && j<=p);
		if (i<s)
		{k=p;
		 for (unsigned  int j=s-1;j>=i;j--)
		 { 
			a[k]=a[j];k=k-1;
		 }
		}
		 for (unsigned  int i=l;i<=m-1;i++) a[i]=z[i];
}

void sort_scal(unsigned int d,unsigned int g,float *  a)
{
	unsigned  int s;
	
	if (d<g)
	{
		s=(d+g)/2;
	
		sort_scal(d,s,a);
		sort_scal(s+1,g,a);
		scalaj(d,s+1,g,a);
	}
}
	  
void quick_sort(unsigned  int d,unsigned  int g, float * a)
{
	unsigned  int s,l,p;
    float v,u;
	l=d;p=g;
	s=(l+p)/2;
	v=a[s];
    do
	{
		while (a[l]<v) l=l+1;
		while (a[p]>v) p=p-1;
		if (l<=p) 
		{
			u=a[l];
            a[l]=a[p];
			a[p]=u;
			l=l+1;
			p=p-1;
		}
	}
	 while (l<=p);
	 if (d<p) quick_sort(d,p,a);
	 if (l<g) quick_sort(l,g,a);
}





int main()
{
	//unsigned  int const n=100;
	float *a=new float[n];

    int k;
	time_t t;
    clock_t tp,tk;
	double tc;
    srand((unsigned)time(&t));
	
    
	do
	{
   

    cout <<" podaj nr procedury"<<"\n"<<"1 - babelkowa"<<"\n"<<"2 - wstawianie"<<"\n"<<"3 - scalanie"<<"\n"<<"4 - szybkie"<<"\n";
     
	//cout <<"podaj k"<<"\n";
	cin >> k;
     cout <<" ciag wylosowany  k="<<k<<"\n";
	 for (unsigned long int i=1;i<=n;i++)
	    {
		  a[i]= rand()%100;
	   //cout <<a[i] <<" \t" ;
	    }
	
	cout <<"\n";
	switch (k) 
	{

	  case 1: {cout <<" babelkowa";tp=clock();boubble_sort(n,a);tk=clock();tc=(tk-tp)/double(CLOCKS_PER_SEC);cout <<" czas obliczen="<<tc<<"\n";break;}
	  case 2: {cout <<" wstawianie";tp=clock();insert_sort(n,a);tk=clock();tc=(tk-tp)/double(CLOCKS_PER_SEC);cout <<" czas obliczen="<<tc<<"\n";break;}
	  case 3: {cout <<" scalanie";tp=clock();sort_scal(1,n,a);tk=clock();tc=(tk-tp)/double(CLOCKS_PER_SEC);cout <<" czas obliczen="<<tc<<"\n";break;}
	  case 4: {cout <<" szybkie";tp=clock();quick_sort(1,n,a);tk=clock();tc=(tk-tp)/double(CLOCKS_PER_SEC);cout <<" czas obliczen="<<tc<<"\n";break;} 
	  case 0: break;
	}
	cout <<" ciag posortowany "<<"\n";
    for (unsigned long int i=1;i<=n;i++)
	  {
	 // cout << a[i]<<"\t";
	  }
	}
	  while (k!=0);
	  
}