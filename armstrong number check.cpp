#include<stdio.h>
int main()
{
	int n,sum=0,t,r;
	printf("enter a number to check wether it is armstrong number ot=r not\n");
	scanf("%d",&n);
	for(t=n;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+(r*r*r);/*if there are 3 digit number then we multiply r 
		3 time if there are 4 didgit then multiply r 4 times or if the 
		digit is 2 digit number then we multiply r 2 time*/
		
	}
	if(t==sum)
	{
		printf("%d is a armstrong number\n",t);
		
	}
	else
	{
		printf("%d is not a armstrong number\n",t);
	}
	return 0;
}
