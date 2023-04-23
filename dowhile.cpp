/*it is an exit controlled loop it mean the loop will execute once even 
if the condition is false or did not satisfy*/
#include<stdio.h>
int main()
{
	int n=10;
	do
	{
		printf("hello\n");
		n++;
	}
	while(n<5);
	return 0;
}
