// c73.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
	{
	 void math(int a,int b);
	 int a,b;
	 printf("��������ֵ:\n",a);
	 scanf("%f",&a);
	 math(a,b);
	 return 0;
	}


 void math(int a,int b)
	{
     for(b=2;b<=a;b++);
	    if(a%b==1)
			printf("������\n");
		else if(b>a)
			printf("����\n");
		else
			printf("������\n");
	}

 