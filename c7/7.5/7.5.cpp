// c75.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<string.h>
int main()
	{
	 char a[10];
	 void math(char a[]);
	 printf("����������:\n");
	 scanf("%s",a);
	 math(a);
	 printf("���:%s\n",a);
	 return 0;
	}


void math(char a[])
	{
	 int i,j,n;
	 for(i=0,j=strlen(a);i<=(strlen(a)/2);i++,j--)
		{n=a[i];
	     a[i]=a[j-i];
		 a[j-i]=n;
		}
	}