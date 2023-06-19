#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("fh.txt","w");
	if(fp==NULL)
	{
		printf("file does not exist\n");
		exit(0);
		
	}
	char str[100];
	printf("write anythin in the text file\n");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	return 0;
}
