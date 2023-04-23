#include<stdio.h>
int main()
{
	int a=2,b=3,c=1,d,e=4;
	d=(a&b);//0and0=0;1and1=1;0and1=0
	printf("%d\n",d);
	d=(a|b);//0and0=0;0and1=1;1and1=1
	printf("%d\n",d);
	d=~b;//-(b+1)
	printf("%d\n",d);
	d=~c;
	printf("%d\n",d);
	d=a<<1;//doubles the number
	printf("%d\n",d);
	d=e>>1;//half the number
	printf("%d\n",d);
	d=c<<1;
	printf("%d\n",d);
	d=c>>1;
	printf("%d\n",d);
	d=b<<1;
	printf("%d\n",d);
	d=b>>1;
	printf("%d\n",d);
	d=(a^b);//0and0=0;1and1=0;0and1=1;1and0=1
	printf("%d",d);
	return 0;
	
	
	
	
	
}
