#include<stdio.h>

int main()
{
	FILE *fp = fopen("File1.txt", "r");
	FILE *fp1 = fopen("File2.txt", "r");
	char ch1, ch2;
	int flag = 0;
	if(fp == NULL)
	{
		printf("File open not successful\n");
	}
	else if(fp1 == NULL)
	{
		printf("File2 open not successful\n");
	}
	else
	{
		while((ch1 = fgetc(fp)) != EOF && (ch2 = fgetc(fp1)) != EOF)
		{
			if(ch1 != ch2)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)
	{
		printf("Files are equal\n");
	}
	else
	{
		printf("Files are not equal\n");
	}
	fclose(fp);
}
