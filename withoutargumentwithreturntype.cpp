#include<stdio.h>
int add();
int main()
{
	int s;
	s=add();
	printf("addition is %d\n",s);
	return 0;
}
int add()
{
	int a,b,sum;
	printf("enter 2 numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}
