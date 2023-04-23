#include<stdio.h>
void swap(int a, int b);
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d %d",&x, &y);
	printf("before swapping the value of x=%d and y=%d\n",x,y);
	swap(x,y);
	printf("after swapping the value through call by value the value of x=%d and y=%d",x,y);
	return 0;

}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
