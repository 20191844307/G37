// c79.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int word,number,space,character;
int main()
	{
	 word=number=space=character=0;
	 char a[100];
	 void math(char a[]);
	 printf("ÊäÈë:\n");
	 math(a);
	 printf("word:%d\nnumber:%d\nspace:%d\ncharacter:%d\n",word,number,space,character);
     return 0;
	}


void math(char a[])
	{
	 int i;
	 for(i=0;a[i]!='0';i++)
		 if((a[i]>'a' && a[i]<'z')||(a[i]>'A' && a[i]<'Z'))
			 word++;
		 else if(a[i]>'0' && a[i]<'9')
			 number++;
		 else if(a[i]==' ')
			 space++;
		 else character++;
	}
