// pie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main(int argc, char* argv[])
{
	float pi=1;
	float n=1;
	int j;
	for(j=1;j<=100;j++,n++){
		if(j%2==0){
			pi*=(n/(n+1));
		}else{
			pi*=((n+1)/n);
		}
	}
	pi=2*pi;
	printf("pi的值为:%10.8f\n",pi);
	return 0;
}
//pi=3.12607813
//pi/2=(2/1)*(2/3)*(4/3)*(4/5)*(6/5)*(6/7)*...
//此公式精确到小数点后一位
