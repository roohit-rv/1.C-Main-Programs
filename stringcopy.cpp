#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20], str2[20];
	printf("enter the first string\n");
	gets(str1);
	printf("the first string is %s\n",str1);
	printf("copying str1 to str2\n");
	strcpy(str2,str1);
	printf("the second string is %s",str2);
	return 0;
}
