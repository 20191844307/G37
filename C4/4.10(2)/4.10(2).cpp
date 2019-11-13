// cao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int I,g;
	float m;
	scanf("%d",&I);
	g=I/100000;
	if(g>10)
		g=10;
	switch(int(g)){
	case 0:m=I*0.1;break;
	case 1:m=100000*0.1+(I-100000)*0.075;break;
	case 2:
	case 3:m=100000*0.1+100000*0.075+(I-200000)*0.05;break;
	case 4:
	case 5:m=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;break;
	case 10:m=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;break;
	}
	printf("%.3f\n",m);

	return 0;					
}	


