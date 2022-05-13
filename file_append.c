#include<stdio.h>

int main()
{
	FILE *fp = fopen("File1.txt", "a");
	char str[10] ="Srinivas";
	if(fp == NULL)
	{
		printf("File open not successful\n");
	}
	else
	{
		for(int i=0;str[i] != '\0';i++)
		{
			fputc(str[i], fp);
		}
	}
	fclose(fp);
}
