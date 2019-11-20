// pie5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	double pie ,i=2, sum, x1=1;
	do
	{
		sum=1/x1*x1+sum;
		x1=2*i-1;
		i++;	
	}
	while((1/x1*x1)<=1e-5);
	
	pie=sqrt(8*sum);
	printf("%lf\n",pie);








	return 0;
}

