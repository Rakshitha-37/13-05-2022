#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp = fopen("File1.txt", "r");
	FILE *fp1 = fopen("File3.txt", "w");
	char ch;
	if(fp == NULL)
	{
		printf("File1 open not successful\n");
	}
	else if(fp1 == NULL)
	{
		printf("File3 open not successful\n");
	}
	else
	{
		while((ch = fgetc(fp)) != EOF)
		{
			fputc(ch, fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
}
