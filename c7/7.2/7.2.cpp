// c72.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
float x1,x2,disc;
int main()
	{
	 void math1(float ,float ,float );
	 void math2(float ,float ,float );
	 void math3(float ,float ,float );
	 float a,b,c;
	 printf("ÊäÈëa,b,c:");
	 scanf("%f,%f,%f",&a,&b,&c);
	 disc=b*b-4*a*c;
	 printf("%f*x*x+%f*x+%f=0",a,b,c);
	 printf("\n");
	 
	 if(disc>0)
		{
		 math1(a,b,c);
		 printf("x1=%f\t\tx2=%f\n",x1,x2);
		}
	 else if(disc=0)
		{
		 math2(a,b,c);
		 printf("x1=%f\t\tx2=%f\n",x1,x2);
		}
	 else
		{
		 math3(a,b,c);
		 printf("²»´æÔÚ\n");
		}
	 return 0;
	}

void math1(float a,float b,float c)
	{
	 x1=(-b+sqrt(disc))/(2*a);
	 x2=(-b-sqrt(disc))/(2*a);
	}
void math2(float a,float b,float c)
	{
	 x1=x2=-b/(2*a);
	}
void math3(float a,float b,float c)
	{
	 printf("\n");
	}
	 
	 
