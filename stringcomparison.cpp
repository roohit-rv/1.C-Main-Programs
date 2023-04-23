#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the first string\n");
	gets(str1);
	printf("enter the second string\n");
	gets(str2);
	printf("the given string are %s and %s\n",str1,str2);
	if(strcmp(str1,str2))
	{
		printf("strings are different\n");
	}
	else
	{
		printf("strings are same\n");
	}
	return 0;
}
