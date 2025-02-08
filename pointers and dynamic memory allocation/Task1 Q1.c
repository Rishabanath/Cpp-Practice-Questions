//1. Program to allocate memory at runtime for an array containing "welcome" and add '4' to the characters at even numbered location.

#include <stdio.h>
#include <string.h>

int main()
{
    char *name;
    int i=0;
    name = (char*)malloc(20*sizeof(char) );
    strcpy(name, "welcome");
    while(*name!='\0')
    {
        if(i%2==0)
        printf("%c",(*name++)+4);
        else
        printf("%c",(*name++));
        i++;

    }

    return 0;
}
