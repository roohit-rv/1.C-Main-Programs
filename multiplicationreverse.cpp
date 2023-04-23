#include<stdio.h>
int main()
{
	int n,i,f;
	printf("write the number for the multiplication table\n");
	scanf("%d",&n);
	for(i=10;i>=1;i--)
	{
		f=n*i;
		printf("%d\n",f);
	}
	return 0;
}
