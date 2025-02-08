//7. To copy one string to another using pointers.

#include<stdio.h>

int main()
{
    // Write C code here
    char string1[20],*ptr1,string2[20],*ptr2;

    printf("Enter string: ");
    scanf("%s",string1);
    ptr1=string1;
    ptr2=string2;
    while(*ptr1!='\0')
    {
        *ptr2=*ptr1;
        ptr1++;
        ptr2++;
    }
    ptr2=string2;
    printf("String 2: %s",ptr2);
    
    return 0;
}
