#include<stdio.h>
int main()
{
	int radius;
	float pi;
	printf("the radius of circle is\n");
	scanf("%d",&radius);
	printf("the value of pi is\n");
	scanf("%f",&pi);
	float area=radius*radius*pi;
	printf("area of circle is %f",area);
	return 0;
	
}
