// c717.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main(int argc, char* argv[])
{
	void math(int n);
	int n;
	scanf("%d",&n);
	math(n);
	printf("\n");
	return 0;
}
void math(int n)
{
	int i;
	if((i=n/10)!=0)
		math(i);
		putchar(n%10+'0');
	
	
}