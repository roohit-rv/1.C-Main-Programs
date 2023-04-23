#include<stdio.h>
struct students
{
	int roll;
	float marks;
};
int main()
{
	int i;
	struct students s[3];
	for(i=0;i<3;i++)
	{
		printf("enter the roll no. of student %d\n",i);
		scanf("%d",&s[i].roll);
		printf("enter the marks of the student %d\n",i);
		scanf("%f",&s[i].marks);
		
	}
	printf("the roll no. and the marks of the students are as follow-\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",s[i].roll);
		printf("%f\n",s[i].marks);
	}
	return 0;
}

