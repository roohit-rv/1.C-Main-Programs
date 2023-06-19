#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("fh.txt","a");
	printf("write the content that you want to append in the file\n");
	char str[100];
	gets(str);
	fprintf(fp,"\n%s", str);
	fclose(fp);
	return 0;
	
}
