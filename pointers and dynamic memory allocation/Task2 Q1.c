//1.  Program to compare two strings using pointer

#include<stdio.h>

int main()
{
	// Write C code here
    char string1[20],string2[20],*str1,*str2;
    int i,flag=0;
    printf("\nEnter string1: ");
    scanf("%s",string1);
    printf("\nEnter string2: ");
    scanf("%s",string2);
    str1 = string1;
    str2 = string2;
    while(*str1==*str2)
    {
        if (*str1=='\0'||*str2=='\0')
            break;
        str1++;
        str2++;
    }
    if(*str1=='\0'&&*str2=='\0')
        printf("\nStrings are equal.");
    else
        printf("\nNot Equal.");

}