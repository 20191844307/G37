// 506.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i;
	double sum=1.0,total=0.0;
	for(i=1;i<=20;i++)
	{
			sum=sum*i;
		total=total+sum;
	}
	
	printf("%lf",total);


	return 0;
}

