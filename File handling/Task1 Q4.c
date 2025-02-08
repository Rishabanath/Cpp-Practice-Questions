//4. To copy a file.

#include <stdio.h>

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
	c = fgetw(fptr1);
	while (c != EOF)
	{
	    fputc(c, fptr2);
		c = fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}