#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("fh.txt","r");
	if(fp==NULL){
		printf("error\n");
		exit(1);
	}
	char str[100];
	while(!feof(fp))
	{
		fgets(str, 100, fp);
		printf("%s\n",str);
	}
	fclose(fp);
	return 0;
}
