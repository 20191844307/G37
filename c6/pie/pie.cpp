// pie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	double a=0,j=1,pi=0;
	do{
		a=1/(j*j)+a;
		j++;
	}while(1/(j*j)>=10e-6);
	a=6*a;
	pi=sqrt(a);
	printf("%f\n",pi);
	

	return 0;
}
