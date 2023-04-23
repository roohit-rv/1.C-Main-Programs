#include<stdio.h>
int main()
{
	int a=2,b=7,c;
	c=(a<0)&&(b>0);
	printf("%d\n",c);
	c=(a<0)||(b>0);
	printf("%d\n",c);
	c=!(a>0);
	printf("%d\n",c);
	c=!a==0;
	printf("%d\n",c);
	c=!a!=0;
	printf("%d\n",c);
	return 0;
}
