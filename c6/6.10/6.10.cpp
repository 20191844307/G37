// c10.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
	{
	 int i,j;
	 int b=s=n=k=c=0;
	 char text[3][80];
	 for(i=1;i<3;i++)
		{
		 printf("��������:\n",i);
		 gets(text[i]);
		 for(j=1;j<80 && text[i][j]!='\0';j++)
			{
			 if(text[i][j]>='A' && text[i][j]<='Z')
				 b++;
			 else if(text[i][j]>='a' && text[i][j]<='z')
				     s++;
			 else if(text[i][j]>='0' && text[i][j]<='9')
				     n++;
			 else if(text[i][j]==' ')
				     k++;
			 else c++;
			}
		}
	 printf("��д��ĸ:%d\n",b);
	 printf("Сд��ĸ:%d\n",s);
	 printf("����:%d\n",n);
	 printf("�ո�:\n",k);
	 printf("�ַ�:\n",c);
	 return 0;
	}


