// 5013.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	double a,x1,x2,i;
	scanf("%lf",&a);
	x1=a/2;
	x2=(x1+a/x1)/2;
	for(i=1;;i++)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
		if(fabs(x1-x2)>=1e-5)
		break;
	}
	
	printf("The square root of %lf is %lf\n",a,x2);
	
	
	
	return 0;
}

