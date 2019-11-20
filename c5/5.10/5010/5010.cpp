// 5010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double n1=1,n2=2,sum=0,i,a;
	for(i=1;i<=20;i++)
	{
		sum=n2/n1+sum;
		
		a=n1;
		n1=n2;
		n2=n1+a;
	}
	printf("%lf\n",sum);
	
	
	
	return 0;
}

