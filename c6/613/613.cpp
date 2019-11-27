// 613.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

#include<stdio.h>

int main (){
	int a,b,i;
	char	s1[20],s2[20];
	scanf("%s %s",s1,s2);
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<=b;i++,a++)
		s1[a]=s2[i];
	printf("%s\n",s1);









	return 0;
}



