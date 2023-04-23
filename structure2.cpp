#include<stdio.h>
struct students
{
	int rollno;
	float marks;
}s1,s2,s3;
int main()
{
	s1.rollno=1;
	s1.marks=32.98;
	s2.rollno=2;
	s2.marks=76.87;
	s3.rollno=3;
	s3.marks=56.6;
	
	printf("details of the student\n");
	printf("%d\n",s1.rollno);
	printf("%f\n",s1.marks);
	printf("%d\n",s2.rollno);
	printf("%f\n",s2.marks);
	printf("%d\n",s3.rollno);
	printf("%f\n",s3.marks);
	return 0;
}
