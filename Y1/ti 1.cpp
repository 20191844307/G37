// ti 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	float p,r,n;
	r=0.07;
	n=10;
	p=pow(1+r,n);
	printf("p=%f\n",p);
	return 0;
}
