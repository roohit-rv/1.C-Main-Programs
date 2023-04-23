#include<stdio.h>
int main()
{
	int n=0,i=1,f;
	printf("sum of first ten natural numbers\n");
	do
	{
		printf("%d\n",i);
	  	n=n+i;
	  	i++;
	  	
	  	
	}while(i<=10);
	printf("sum of 10 natural numbers is %d\n",n);
	return 0;
}
