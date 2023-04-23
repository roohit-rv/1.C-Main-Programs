#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	printf("enter the number of students\n");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)malloc(n*sizeof(int));
	for(i=1;i<n;i++)
	{
		printf("marks of student no. %d\n",i);
		scanf("%d",&ptr[i]);
	}
	for(i=1;i<n;i++)
	{
		printf("marks of student %d is %d\n",i, ptr[i]);
		
	}
	free(ptr);
	return 0;
}
