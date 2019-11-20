// 509.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i ,j ,sum=0;
	for(i=6;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum=sum+j;
		
			if(sum==i)
			{
				printf("%d its factors are ",i);
				for(j=1;j<i;j++)
					if(i%j==0)
					printf("%d,",j);
			printf("\n");
			}
		}
	}
	return 0;
}

