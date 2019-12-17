// 20191844305.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i=2£¬,a=1,r,w=0;
while(a<=100000)
{
i=2;
while (i<a&&w==0)
{
r=a%i;
if(r==0) 
{
w=1;
break;
}
i=i+1;
}
if (w==0&&a>1)
printf("%d\n",a);
a=a+1;
}
return 0;
}


