//1. Program to copy the data and add '3' to data at even location and display them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	char c,str[20];

	fptr1 = fopen("file1", "w");
    printf("Enter string:");
    gets(str);
    fprintf(fptr1,"%s", str);
    fclose(fptr1);
    fptr1 = fopen("file1", "r");
	fptr2 = fopen("file2", "w");
	c = fgetc(fptr1);
	int i=0;
	while (c != EOF)
	{
	    i++;
	    if(i%2==0)
		fputc(c+3, fptr2);
		else
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
