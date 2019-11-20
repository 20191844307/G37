// 5011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double i,h=100,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+h;
		h=h/2;
		
	}
	printf("sum==%lf\nh==%lf\n",sum,h);
	
	
	return 0;
}

