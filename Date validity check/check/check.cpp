// check.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int year,month,day,m[12],total,i; 
	scanf("%d%d%d",&year,&month,&day);
	total=0;
	m[0]=0;
	m[1]=31;
	m[3]=31;
	m[4]=30;
	m[5]=31;
	m[6]=30;
	m[7]=31;
	m[8]=31;
	m[9]=30;
	m[10]=31;
	m[11]=30;
	if(year%4==0){
		m[2]=29;}
	else{
		m[2]=28;}
	
	for(i=0;i<month;i++){
		total=total+m[i];}
	total=total+day;
	printf("%d\n%d\n%d\n%d\n",year,month,day,total);
	return 0;
}