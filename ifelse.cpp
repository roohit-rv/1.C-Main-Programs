#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=18&&age<=60)
	{
		printf("eligible, proceed further\n");
	}
	else
	{
		printf("out of league :)\n");
	}
	return 0;
}
