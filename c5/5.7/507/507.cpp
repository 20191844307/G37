// 507.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double k,sum1,sum2,sum3,sum;
	for(k=1;k<=100;k++)
	{
		sum1=sum1+k;
	
	} 
	for(k=1;k<=50;k++)
	{ 
		sum2=sum2+k*k;
	} 
	for(k=1;k<=10;k++)
	{ 
		sum3=sum3+1/k;
	} 
	sum=sum1+sum2+sum3;
	printf("%lf",sum);
	
	
	return 0;
}

