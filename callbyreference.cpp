#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int p,q;
	printf("enter two numbers\n");
	scanf("%d %d",&p,&q);
	printf("before swapiing the vaue of p is %d and y is %d\n",p,q);
	swap(&p,&q);
	printf("after swapping the value through call by reference the value of p is %d and q is %d\n",p,q);
	
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
