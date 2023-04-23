#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number\n");
	scanf("%d %d", &a,&b);
	if (a>b)
	{
		printf("a is greater than b\n");
	}
	else
	{
		printf("b is greater than a\n");
	}
	return 0;
}
