#include<stdio.h>
int main()
{
	int a,b,c; /* when if block contains another if block inside it
	then itis known as nested if */
	printf("write down three number\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a is greatest\n");
		}
	}
	if (b>a)
	{
		if (b>c)
		{
			printf("b is greatest\n");
		}
	}
	if (c>a)
	{
		if(c>b)
		{
			printf("c is greatest\n");
		}
	}
     return 0;
 }
 
