// c8.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
	{
	 int a[3][3];
	 int i,j,max,k,column,n;
	 printf("请输入数据:\n");
     scanf("%d",&a[i][j]);
	 for(i=1;i<3;i++)
		{
		 max=a[i][0];
		 column=0;
		 for(j=1;j<3;j++)
			 if(a[i][j]>max)
				{max=a[i][j];
			     column=j;
				}
			 n=1;
		 for(k=1;k<3;k++)
			 if(a[k][column]<max)
		        n=0;
			 if(n=1)
				 printf("a[%d][%d]=%d\n",i,column,max);
			 else
				 printf("该点不存在\n");
			 return 0;
		}






