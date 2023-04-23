#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("enter the elements of the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the given array is-\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		
	}
	printf("the given array in the descending order\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
