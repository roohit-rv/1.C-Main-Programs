#include<stdio.h>
int main()
{
	int i=10;
	int *j;
	j=&i;
	printf("address of i=%u\n",&i);
	printf("address of j=%u\n",&j);
	printf("address of i=%u\n",j);
	printf("value in i=%d\n",i);
	printf("value in i=%d\n",*(&i));
	printf("value in i=%d\n",*(&j));
	printf("value in i=%d\n",*j);
	return 0;
}
