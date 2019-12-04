// c15.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
int main()
{ 
	char a[10];

  int math(char a[]);
  printf("ÊäÈë:");
  gets(a);
  printf("%d\n",math(a));
  return 0;
  }
  int math(char s[])
  { int i,j;
    j=0;
    for (i=0;s[i]!='\0';i++)
     {if (s[i]>='0'&& s[i]<='9')
     j=j*16+s[i]-'0';
      if (s[i]>='a' && s[i]<='f')
     j=j*16+s[i]-'a'+10;
      if (s[i]>='A' && s[i]<='F')
     j=j*16+s[i]-'A'+10;
     }
    return(n);
  }