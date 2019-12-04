// c74.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int a[3][3];
int main()
	{
	 void math(int ,int );
	 int i,j;
	 printf(" ‰»Î ˝æ›:\n");
	 scanf("%d",&a[i][j]);
	 math(i,j);
	 for(i=0;i<=3;i++)
			{for(j=0;j<=3;j++)
				printf("%4d",a[i][j]);
			}
				return 0;
			
	}


void math(int i,int j)
	{int n;
	 for(i=0;i<=3;i++)
		{for(j=0;j<=3;j++)
		     n=i;
	         i=j;
			 j=n;
		}
	}
			 
		   
		    
	 

		 


	 

