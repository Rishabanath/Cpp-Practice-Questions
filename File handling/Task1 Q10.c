//10. C program to check whether a file or directory exists or not

#include <stdio.h>

int check(char file[20])
{
    FILE *fptr = fopen(file, "r");

    if (fptr == NULL)
    return 1;
    fclose(fptr);
    
    return 0;
}

int main()
{
    char file[20];
    int r=0;

    printf("Enter file name: ");
    scanf("%s", file);

    if(check(file))
    printf("\nFile does not exists");
    else
    printf("\nFile exists");
    
    
    return 0;
}
