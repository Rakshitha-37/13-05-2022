#include<stdio.h>

int main()
{
	FILE *fp = fopen("File3.txt", "r");
	int line = 0, word = 0, character = 0;
	char ch;
	if(fp == NULL)
	{
		printf("File open not successful\n");
	}
	else
	{
		while((ch = fgetc(fp)) != EOF)
		{
			character++;
			if(ch == '\n' || ch == '\0')
				line++;
			if(ch == ' ' || ch == '\n' || ch == '\0' || ch == '\t')
				word++;
		}
		printf("Characters = %d, Lines = %d, Words = %d\n", character, line, word);
	}
}
