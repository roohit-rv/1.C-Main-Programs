#include<stdio.h>
int main()
{
	int a=1,b;
	b=a++;//post increment
	printf("%d\n",b);
	printf("%d\n",a);
	int c=2,d;
	d=++c;//pre increment
	printf("%d\n",d);
	printf("%d\n",c);
	int e=4,f;
	f=--e;//pre decrement
	printf("%d\n",f);
	printf("%d\n",e);
	int g=5,h;
	h=g--;//post decrement
	printf("%d\n",h);
	printf("%d\n",g);
	return 0;
	
	
}
