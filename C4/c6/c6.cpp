#include<stdio.h>
#include<math.h>
#define M 1000
int main()
{
	 int i,k;
	 printf("������һ��С��%d������i:",M);
	 scanf("%d",&i);
	 if(i>M)
	{ printf("�������ֵ����1000������������һ��С��%d������i:",M);
	  scanf("%d",&i);
	}
	 k=sqrt(i);
	 printf("%d��ƽ����������������%d\n",i,k);
	 return 0;
}