#include<stdio.h>
int main()
{
	int radius, height;
	float pi;
	printf("the radius of cylinder is\n");
	scanf("%d",&radius);
	printf("the value of pi is\n");
	scanf("%f",&pi);
	printf("the height of cylinder is\n");
	scanf("%d",&height);
	float volume=radius*radius*pi*height;
	printf("the volume of cylinder is %f",volume);
	return 0;
}
