#include<stdio.h>
int main()
	{
	 char c;
	 int number=0,word=0,character=0,space=0;
	 printf("������һ���ַ�:\n");
	 while((c=getchar()!='\n'))
		{
		 if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			 word++;
		 else if(c==' ')
			     space++;
		 else if(c>='0'&&c<='9')
			     number++;
		 else character++;
		}
	 printf("������:%d\n�ַ���:%d\n��ĸ��:%d\n�ո���:%\n",number,character,word,space);
	 return 0;
	}
