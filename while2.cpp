#include<stdio.h>
int main()
{
	int n=1;
	printf("write what you want to print 10 time\n");
	char ch;
	scanf("%c",&ch);
	while (n<=10)
	{
		printf("%c\n",ch);
		n++;
	}
	return 0;
}
