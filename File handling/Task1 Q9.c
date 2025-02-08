//9. C program to rename a file using rename() function

#include <stdio.h>

int main()
{
	FILE *fptr1;
	char str[20];
    char file1[]="file1.txt";
    char file2[]="file2";
	fptr1 = fopen(file1, "w");
    printf("Enter string:");
    gets(str);
    fprintf(fptr1,"%s", str);
    fclose(fptr1);
    
    rename(file1, file2);
	return 0;
}
