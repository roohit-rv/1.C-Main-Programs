#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,nguesses=1;
	srand(time(0));
	number=(rand()%100)+1;
	printf("the number is %d\n",number);
    
	do
	{
		printf("guess the number between 1 to 100\n");
    scanf("%d",&guess);
		if(guess<number)
		{
			printf("the number is small\n");
			
		}
		else if(guess>number)
		{
			printf("the number is greater\n");
			
		}
		else if (guess=number)
		{
			printf("you guessed it correct and you took %d guesses to\n",nguesses);
		
				}
		else
		{
			printf("enter valid input\n");
		}
		nguesses++;
		
	}while (guess!=number);
	
	return 0;
	
}
