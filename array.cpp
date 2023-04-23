#include<stdio.h>
int main()
{
	int i,a[5];
	printf("enter the marks of 5 students\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the marks of the students are\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
