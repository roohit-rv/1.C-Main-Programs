#include<stdio.h>
int add(int a, int b);
int main()
{
	int p, q, s;
	printf("enter two numbers\n");
	scanf("%d %d",&p,&q);
	add(p,q);
	s=add(p,q);
	printf("addition is %d\n",s);
	return 0;
}
int add(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
	
}
