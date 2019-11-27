// s4.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<string.h>
int main()
	{void insert(char[]);
     char str[80];
	 printf("ÊäÈëÊý×Ö:");
	 scanf("%s",str);
	 insert(str);
	 return 0
	}


void insert(char[])
	{
	 int i;
	 for(i=strlrn(str);i>0;i--)
		{str[2*i]=str[i];
	     str[2*i-1]=' ';
		}
	 printf("Êä³ö:\n%s\n",str);
	}