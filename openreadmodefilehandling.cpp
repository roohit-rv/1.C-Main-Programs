#include<stdio.h>
int main()
{
	FILE* fp;
	fp=fopen("c:/users/rv/desktop/compiler.txt","r");
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		
	
	printf("file opened in read mode\n");
}
int ch;
while((ch=fgetc(fp))!=EOF)
{
	printf("%c",ch);
}
	return 0;
}
