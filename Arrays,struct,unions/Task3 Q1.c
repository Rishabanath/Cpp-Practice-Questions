//1. Write a c program to perform string manipulation by using the library function.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="Rishab",str2[]="Training",str3[10];
    printf("String1: %s\nString2: %s",str1,str2);
    printf("\nLength of string1 :%ld",strlen(str1));
    printf("\nLength of string2 :%ld",strlen(str2));
	printf("\nCopy str1 to str3: %s",strcpy(str3, str1));
	printf("\nCompare str1 and str2: %d",strcmp(str3, str2));
    printf("\nConcatenate str1 and str2: %s",strcat(str1, str2));
   
    return 0;
}
