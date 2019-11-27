// 6014.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char s1[100],s2[100];
	int i;
	int sum=0 ;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0' ;i++)
	{
		sum=sum+s1[i]-s2[i];
	}
	printf("%d",sum);
	return 0;
}

