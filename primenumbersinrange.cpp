#include<stdio.h>
int main()
{
	int stno,enno,flag=0,i,num;
	printf("enter the starting number\n");
	scanf("%d",&stno);
	printf("enter the ending number\n");
	scanf("%d",&enno);
	printf("the prime numbers between %d and %d are\n", stno,enno);
	for(num=stno;num<=enno;num++)
	{
		flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag++;
				break;
				
			}
		}
		
		if(flag==0)
		{
			printf("%d\n",num);
		}
		
		}
			
		return 0;
	
}
