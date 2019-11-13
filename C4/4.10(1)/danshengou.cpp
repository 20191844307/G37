// danshengou.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	float I,m;
	scanf("%f",&I);
	if(I<=100000){
		m=I*0.1;
		printf("%.3f\n",m);
	}
	else if(I<=200000){
		m=10000+(I-100000)*0.075;
		printf("%.3f\n",m);

	}
	else if(I<=400000){
		m=17500+(I-200000)*0.05;
		printf("%.3f\n",m);
	}
	else if(I<=600000){
		m=27500+(I-400000)*0.03;
		printf("%.3f\n",m);
	}
	else if(I<=1000000){
		m=33500+(I-600000)*0.15;
		printf("%.3f\n",m);
	}
	else{
		m=39500+(I-1000000)*0.01;
		printf("%.3f\n",m);
	}

	return 0;
}
