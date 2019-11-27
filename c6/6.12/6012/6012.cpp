// 6012.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char s1[100],s2[100];
	int i;
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
        if('A'<=s1[i]&&s1[i]<='Z')
		{
			s2[i]=155-s1[i];   //'A'+'Z'=155 
		}
        else if('a'<=s1[i]&&s1[i]<='z')
		{
			s2[i]=219-s1[i];   //'a'+'z'=219
		}
        else 
		{
			s2[i]=s1[i];
		}

	}
	printf("%s",s2);

	return 0;
}

