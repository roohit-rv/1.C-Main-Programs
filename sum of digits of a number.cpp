#include<stdio.h>
int main()
{
	int num,sum=0,rem,t;
	printf("enter any number\n");
	scanf("%d",&num);
	t=num;
	while(t!=0)
	{
		rem=t%10;
		sum=sum+rem;
		t=t/10;
		
	}
	printf("sum of the digit of of number is %d\n",sum);
	return 0;
}
