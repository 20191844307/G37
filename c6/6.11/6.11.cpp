// c11.cpp : Defines the entry point for the console application.
//

#include<stdio.>
int main()
	{
	 int i,j,k;
	 int a[5]={'*','*','*','*','*'};
	 char space=' ';
	 for(i=1;i<=5;i++)
		{
		 printf("\n");
		 printf("    ");
		 for(j=1;j<=i;j++)
			 printf("%c",space);
		 for(k=1;k<=5;k++)
			 printf("%c",a[k]);
		}
	 printf("\n");
	 return 0;
	}
