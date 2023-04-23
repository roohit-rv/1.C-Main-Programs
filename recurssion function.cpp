#include<stdio.h>
int factorial(int n);
int main()
{
	int f, number=5;
	f=factorial(number);
	printf("the factorial is %d\n",f);
	return 0;
}
factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1));
	}
}
