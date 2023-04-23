#include<stdio.h>
void add(int a,int b);
int main()
{
	int p,q;
	printf("enter two numbers for addition\n");
	scanf("%d %d",&p,&q);
	add(p,q);
	return 0;
}
void add(int a, int b)
{
	int sum;
	sum=a+b;
	printf("addition is %d\n",sum);
}
