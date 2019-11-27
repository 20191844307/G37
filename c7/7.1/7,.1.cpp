// s1.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
	{
	 int hcf(int,int);
	 int lcd(int,int,int);
	 int i,j,k,n;
	 scanf("%d,%d",&i,&j);
	 k=hcf(i,j);
	 printf("H.C.F=%d\n",k);
	 n=lcd(i,j,k);
	 printf("L.C.D=%d\n",n);
	 return 0;
	}

int hcf(int i,int j)
	{
	 int t,r;
	 if(j>i)
		{t=u;u=v;v=t}
	 while((r=i%j)!=0)
		{j=i;
		 i=r;}
	 return(i);
	}

int lcd(int i,int j,int k)
	{
	 return(i*j/k);
	}

