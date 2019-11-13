// 4012.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float x,y;
	scanf("%f%f",&x,&y);
	if
		((x+2)*(x+2)+(y+2)*(y+2)<=1 || (x+2)*(x+2)+(y-2)*(y-2)<=1 || (x-2)*(x-2)+(y+2)*(y+2)<=1 || (x-2)*(x-2)+(y-2)*(y-2)<=1) 

		printf("Height of building is 10 m");
	else
		printf("height of building is 0");
	return 0;
}

