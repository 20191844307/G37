#include<stdio.h>
int main()
	{
	 int a,b,c;
	 printf("��������������:");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a>b)
		if(a>c)
		  printf("max=%d\n",a);
		else printf("max=%d\n",c);
	 else if(c>a)
		    if(c>b)
			printf("max=%d\n",c);
			else printf("max=%d\n",b);
	 return 0;
	}			