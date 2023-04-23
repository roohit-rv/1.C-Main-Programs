#include<stdio.h>
struct student
{
	int rollno;
	int marks;
	
};
int main()
{
	struct student s1,s2,s3;
	
	s1.rollno=1;
	s1.marks=32;
	s2.rollno=2;
	s2.marks=76;
	s3.rollno=3;
	s3.marks=56;
	
	printf("details of the student\n");
	printf("%d\n",s1.rollno);
	printf("%d\n",s1.marks);
	printf("%d\n",s2.rollno);
	printf("%d\n",s2.marks);
	printf("%d\n",s3.rollno);
	printf("%d\n",s3.marks);
	return 0;
}
