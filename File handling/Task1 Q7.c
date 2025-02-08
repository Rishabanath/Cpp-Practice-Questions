//7. Program to find and replace a word in a text file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1, *fp2;
	char word[10], ch, read[10], replace[10];
	fp1 = fopen("file.txt", "r");
	fp2 = fopen("replaced.txt", "w+");
	printf("Conetens in file:\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	puts("\n\nEnter the word to find:");
	gets(word);
	puts("Enter the word to replace it with :");
	gets(replace);
	rewind(fp1);
	while (!feof(fp1)) 
	{
		fscanf(fp1, "%s", read);
		if (strcmp(read, word) == 0) 
		{
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}

	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}

