#include<stdio.h>
int main()
{
	//calculating simple interest
	int principal=23, rate=3, years=4;
	float simpleinterest=(principal*rate*years)/100;
	printf("the principal is %d, rate is %d and the given time in years is %d, therefore the simple interest will be %f", principal,rate,years,simpleinterest);
	return 0;

}
