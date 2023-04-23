#include<stdio.h>
int main()
{
	int i,j,a[5];
	printf("enter the elements in the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array in the reverse order\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
		
	}
	return 0;
}
