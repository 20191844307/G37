// s5.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<string.h>
char str[10];
int main()
	{
	 void sort(char[]);
	 int i,j;
	 for(j=1;j==1;)
		{printf("输入:\n");
	     scanf("%s",&str);
		 if(strlen(str)>10)
			 printf("重新输入");
		 else j=0;
		}
	 sort(str);
	 printf(string:\n");
	 for(i=0;i<10;i++)
		 printf("%c",str[i]);
	 printf("\n");
	 return 0;
	}


 void sort(char[])
	{
	 int i,j;
	 char t;
	 for(j=1;j<10;j++)
		 for(i=0;(i<10-j)&&(str[i]='\0');i++)
			 if(str[i]>str[i+1])
				{t=str[i];
			     str[i]=str[i+1];
				 str[i+1]=t;
				}
	}
