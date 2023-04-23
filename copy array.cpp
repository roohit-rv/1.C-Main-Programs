#include<stdio.h>
int main()
{
	int i,a[5],b[5];
	printf("enter the elements in the first array\n");
	for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	
}
printf("elements of second array are\n");
for(i=0;i<5;i++)
{
	b[i]=a[i];
	printf("%d\n",b[i]);
	
}
return 0;
}
