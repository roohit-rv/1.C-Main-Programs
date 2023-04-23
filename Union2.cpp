#include<stdio.h>
union job
{
	float salary;
	int id;
	
}j;
int main()
{
	j.salary=1000;
	printf("salary=%f\n",j.salary);
	j.id=21;
	printf("employee id=%d\n",j.id);
	return 0;
}
