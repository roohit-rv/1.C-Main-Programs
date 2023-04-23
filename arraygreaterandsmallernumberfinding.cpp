#include<stdio.h>
int main()
{
	int i,a[5],max,min;
	printf("enter the elements in the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements in the array are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	printf("the greatest element in the array is %d\n",max);
		printf(" the smallest number in the array is %d\n",min);
		return 0;
}
