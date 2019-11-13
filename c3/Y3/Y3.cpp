// Y3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float r,h,a,s,c,S,v,V;
	scanf("%f%f%f",&a,&r,&h);
	s=a*r*r;
    c=2*a*r;
	S=4*a*r*r;
    v=4/3*a*r*r*r;
	V=s*h;
	printf("圆的面积%lf\n",s);
	printf("圆的周长%lf\n",c);
	printf("圆球的面积%lf\n",S);
	printf("圆球的体积%lf\n",v);
	printf("圆柱的体积%lf\n",V);
	return 0;
}

