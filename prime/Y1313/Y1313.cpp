// Y1313.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <time.h>
int main(int argc, char* argv[])
{
	int n,i,m,total=0,flag;
	long t0,t1;
	t0=clock();
	scanf("%d", &m);
		for(n=2;n<=m;n++) {
			flag = 1;
			for(i=2;i<=n/2;i++) {
				if (n%i==0) {
					flag = 0;
					total ++;
					break;
			}
		}


	}
	t1=clock();
printf("\n素数个数2到 %d: %d\nTime used: %10.2f seconds\n", m, m - 1 - total,(t1-t0)/(float)CLOCKS_PER_SEC);
	return 0;
}

