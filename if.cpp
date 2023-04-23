#include<stdio.h>
int main()
{
	printf("enter your age\n");
	int age;
	scanf("%d", &age);
	if (age<18)
	{
		printf("tu chota hai re\n");
	}
	if (age>=18&&age<=60)
	{
		printf("noice now just go and give drivin test\n");
	}
	if (age>60)
	{
		printf("system allow nahi karega\n");
	}
	return 0;
	
	
}
