#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],mult[2][2],i,j,k;
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
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mult[i][j]=0;
			for(k=0;k<2;k++)
			{
				mult[i][j]=mult[i][j]+a[i][j]*b[i][j];
			}
		}
	}
	printf("the multiplication of these two matrix is-\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",mult[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
}
