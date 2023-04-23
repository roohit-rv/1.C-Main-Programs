#include<stdio.h>
int main()
{
	int num,i,f=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
	if(num%i==0)
	{
		f++;
		break;
	}
    }
	if(f==0)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
	return 0;
}
