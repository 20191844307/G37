// prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int		is_prime(int n);

int main(int argc, char* argv[])
{
	int		n, m;
	int		total = 0;

	printf("input a number:");
	scanf("%d", &m);

	for(n=2;n<=m;n++) {
		if ( is_prime(n) ) {
			//printf("%-4d ", n);
			total ++;
		}
	}

	printf("\nTotal prime numbers between 2 and %d: %d\n", m, total);

	return 0;
}

int		is_prime(int n)
{
	int		i;
	int		flag = 1;

	for(i=2;i<=n/2;i++) {
		if (n%i==0) {
			flag = 0;
			break;
		}
	}

	return flag;
}
//计算1000000以内的素数个数是78498,用时59秒

/*
	1、	修改为函数实现素数判断，简化程序结构
	2、	注意分离后的逻辑隔离，哪些归函数内负责，哪些归main负责
*/