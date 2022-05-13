#include<stdio.h>

int main()
{
	FILE *fp = fopen("File1.txt", "r");
	char ch;
	if(fp == NULL)
	{
		printf("File open not successful\n");
	}
	else
	{
		while((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}
	fclose(fp);
}
