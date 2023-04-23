#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],add[2][2],i,j;
	printf("enter the elements of the 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of the 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the given matrix are-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the addition of the these two matrices is-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",add[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
