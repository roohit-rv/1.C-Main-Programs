#include<stdio.h>
int main()
{
	int a, *iptr;
	float b, *fptr;
	iptr=&a;
	fptr=&b;
	printf("address of a is %u\n",iptr);
	printf("address of b is %u\n", fptr);
	printf("addition of numbers in pointer\n");
	printf("%u+2 is \n",iptr);
	iptr=iptr+2;
	printf("%u\n",iptr);
	printf("%u+1\n",fptr);
	fptr=fptr+1;
	printf("%u\n",fptr);
	printf("subtraction of numbers in pointer \n");
	printf("%u-2\n", iptr);
	iptr=iptr-2;
	printf("%u\n",iptr);
	printf("%u-1\n", fptr);
	fptr=fptr-1;
	printf("%u\n",fptr);
	printf("increment and decrement of numbers in pointers\n");
	printf("%u++\n",iptr);
	iptr=iptr++;
	printf("%u\n",iptr);
	printf("%u--\n",fptr);
	fptr=fptr--;
	printf("%u\n",fptr);
	return 0;
}
