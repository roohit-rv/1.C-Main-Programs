#include<stdio.h>
int main()
{
	int a[10],i,pos,x;
	printf("enter the elements of the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to insert in the array\n");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(x<a[i])
		{
			pos=i;
			break;
		}
	}
	for(i=9;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=x;
	printf("the array after inserting the new array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
