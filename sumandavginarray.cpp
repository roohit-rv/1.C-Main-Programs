#include<stdio.h>
int main()
{
	int i,a[10],sum=0;
	float avg;
	printf("enter 10 elements in the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements in the array are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("sum of all the numbers in the array is ");
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("%d\n",sum);
	avg=sum/10.0;
	printf("the average of the elements in the array is %f\n",avg);
	return 0;
}
