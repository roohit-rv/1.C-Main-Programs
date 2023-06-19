#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","w+");
	printf("give the overwrite context\n");
	char str[100];
	gets(str);
	fprintf(fp,"%s", str);
	rewind(fp);
	while(!feof(fp))
	{
		fgets(str, 100, fp);
		printf("%s\n",str);
	}
	fclose(fp);
	return 0;
}
