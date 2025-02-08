//8. To concatenate two strings using pointers.14

#include<stdio.h>

int main()
{
    // Write C code here
    char string1[20],*ptr1,string2[20],*ptr2;

    ptr1=string1;
    printf("Enter string1: ");
    scanf("%s",string1);
     printf("Enter string2: ");
    scanf("%s",string2);
    while(*ptr1!='\0')
    {
        ptr1++;
    }
    ptr2=string2;
    while(*ptr2!='\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    ptr1=string1;
    printf("String after concatenation: %s",ptr1);
    
    return 0;
}
