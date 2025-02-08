//9. To compare two strings using pointers.

#include<stdio.h>

int main()
{
    // Write C code here
    char string1[20],*ptr1,string2[20],*ptr2;
    int flag=0;
    ptr1=string1;
    ptr2=string2;
    printf("Enter string1: ");
    scanf("%s",string1);
     printf("Enter string2: ");
    scanf("%s",string2);
    
    while(*ptr2==*ptr1)
    {
        // *ptr1=*ptr2;
        ptr1++;
        ptr2++;
        if(*ptr1=='\0'||*ptr2=='\0')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Equal");
    }
    else
    {
        printf("not equal");
    }
    
    return 0;
}
