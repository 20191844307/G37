// 615.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char s1[20],s2[20];
	int i,l;
	scanf("%s",s2);
	l=strlen(s2);

	for(i=0;i<=l+1;i++)
		s1[i]=s2[i];
	printf("%s\n",s1);

	return 0;
}
