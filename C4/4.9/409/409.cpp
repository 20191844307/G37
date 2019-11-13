// 409.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main(int argc, char* argv[])
{
	int a,v,w,x,y,z;
	scanf("%d",&a);
	if(a>9999)
	{
		printf("It is a five-figure number%c\n",a);
	}
	else if(a<=9999)
	{
		printf("It is a four-figure number%c\n",a);
	}
	else if(a<=999)
	{
		printf("It is a three-figure number%c\n",a);
	}
	else if(a<=99)
	{
		printf("It is a two-figure number%c\n",a);
	}
	else
	{
		printf("It is a one-figure number%c\n",a);
	}
	v=a/10000;
	w=a/1000%10;
	x=a/100%10%10;
	y=a/10%100%10;
	z=a%10;
		printf("The number on the ten thousand is %d\n",v);
		printf("The number on the thousand is %d\n",w);
		printf("The number on the hundred is %d\n",x);
	    printf("The number on the ten is %d\n",y);
		printf("The number on the bit is %d\n",z);
	if(v!=0){	
		printf("%d%d%d%d%d",z,x,y,w,v);}
	else if(v==0){
		printf("%d%d%d%d",z,y,x,w);}
	else if(v==0,w==0){
		printf("%d%d%d",z,y,x);}
	else if(v==0,w==0,x==0){
		printf("%d%d",z,y);}
	else {
		printf("%d",z);}
	return 0;
}

