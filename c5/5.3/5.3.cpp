#include<stdio.h>
int main()
	{
	 int m,n,bei,yue,a;
	 printf("����������������:");
	 scanf("%d,%d",&m,&n);
	 if(n<m)
		{
		 a=n;
		 n=m;
		 m=a;
		}
	 bei=n*m;
	 while(m!=0)
		{
		 yue=n%m;
		 n=m;
		 m=yue;
		}
	 printf("���Լ��:%d\n",n);
	 printf("��С������:%d\n",bei/n);
	 return 0;
	}