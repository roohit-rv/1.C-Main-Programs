#include<stdio.h>
int main()
{
	while(1)
	{
	
   
	   	
	int n;
	printf("enter 1 for addition\n");
	printf("enter 2 for subtraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	printf("enter 5 for exit when you finish\n");
	
	
	
	printf("enter any two numbers\n");
	scanf("%f %f",&a,&b);
	scanf("%d",&n);
	float a,b,c;
	
	switch (n)
	{
		case 1:
		c=a+b;
	    printf("%f+%f=%f\n",a,b,c);
	    break;
			
		case 2:
		c=a-b;
		printf("%f-%f=%f\n",a,b,c);
		break;
			
		case 3:
		c=a/b;
		printf("%f/%f=%f\n",a,b,c);
		break;
		
		case 4:
		c=a*b;
		printf("%f*%f=%f\n",a,b,c);
		break;
		
		case 5:
		printf("succesfully exited\n");
		goto end;
			
		default :
		printf("enter valid input\n");
		break;
	}
}
end:
	

	return 0;
}
