#include<stdio.h>
int main()
{
	int i,trm,t1=0,t2=1,n;
	printf("enter the number of terms upto which you want to print fibonacci series\n");
	scanf("%d",&n);
	printf("fibonacci series upto term %d is %d,%d,",n,t1,t2);
	for(i=3;i<=n;i++)
	{
		trm=t1+t2;
		printf("%d,",trm);
		t1=t2;
		t2=trm;
	}
	return 0;
	
}
