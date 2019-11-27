// 614.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string>

int main(int argc, char* argv[])
{
	char s1[20],s2[20];
	int i,a,b;
	int ok=0;
	gets(s1);
	gets(s2);
	for(i=0;i<20;i++){
		a=s1[i];
		b=s2[i];
		if(a!=b){
			printf("%d\n",a-b);
			ok=1;
			break;
		}
		
	}
	if(!ok) printf("0\n");
	return 0;
}
