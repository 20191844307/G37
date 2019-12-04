// c713.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
double p(int n, int x);                  
int main()
{
    double N;
    int i,j;
    scanf("%d %d", &s, &y);              
    r=p(i,j);                           
    printf("%f\n", N);                   
    return 0;
}
double p(int n, int x)
{
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else
        return ((2*n-1)*x-p(n-1, x)-(n-1)*p(n-2, x))/n;
}