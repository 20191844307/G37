#include<stdio.h>
int main()
	{float score;
	 char grade;
	 printf("������ɼ�:");
	 scanf("%f",&score);
	 switch((int)(score/10));
		{case 10;
	     case 9:b='A';break;
         case 8:b='B';break;
		 case 7:b='C';break;
		 case 6:b='D';break;
		 case 5;
		 case 4;
		 case 3;
		 case 2;
		 case 1;
		 case 0:b='E';
		}
	  printf("�ɼ���%5.1f���ȼ���%c\n",score,grade);
	  return 0;
	}