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
	printf("Բ�����%lf\n",s);
	printf("Բ���ܳ�%lf\n",c);
	printf("Բ������%lf\n",S);
	printf("Բ������%lf\n",v);
	printf("Բ�������%lf\n",V);
	return 0;
}

