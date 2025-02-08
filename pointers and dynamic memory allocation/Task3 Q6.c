//6. To find the length of string using function pointers.

#include<stdio.h>

int main()
{
    // Write C code here
    char string[20],*ptr;
    int count=0;
    printf("Enter string: ");
    scanf("%s",string);
    ptr=string;
    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("Size of string is: %d",count);
    
    return 0;
}
