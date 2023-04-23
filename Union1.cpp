#include<stdio.h>
union job
{
	float salary;
	int empid;
	
}j;
int main()
{
	j.salary=10000;
	j.empid=45;
	printf("salary=%f\n",j.salary);
	printf("employee id=%d\n",j.empid);
	return 0;
}
