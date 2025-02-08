//11. C program to print source code of itself as output

#include <stdio.h>

int main()
{
    int r=0;
    char ch;
    char file[]="main.c";
    FILE *fptr = fopen(file, "r");
    if (fptr == NULL)
    {
        printf("error");
    }
    else
    {
        while (1) {
		ch = fgetc(fptr);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
    }

    
    return 0;
}
