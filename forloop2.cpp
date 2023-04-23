#include<stdio.h>
int main()
{
	int i,num,f=1;
	printf("enter the number whose factorial you want\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
    }
    printf("the factorial of the number %d is %d\n",num,f);
    return 0;
}
