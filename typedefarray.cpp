#include<stdio.h>
int main()
{
	typedef int arr[5];
	arr x={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		printf("%d\n",x[i]);
	}
	return 0;
}
