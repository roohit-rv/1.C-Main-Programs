#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("write any 10 numbers\n");
	
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("sum of these 10 numbers are %d\n",sum);
	float avg;
	avg=sum/10.0;
	printf("average of the sum of these numbers is %f\n",avg);
	return 0;
}
