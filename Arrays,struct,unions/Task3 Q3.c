//3. Concatenate two strings using arrays.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[10];
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);
    printf("\nstring 1: %s",str1);
    printf("\nstring 2: %s",str2);
    int size1,size2;
    size1=(strlen(str1));
    size2=(strlen(str2));
    // size=size1+size2;
    for(int i=size1;i<size1+size2;i++)
    {
        str1[i]=str2[i-size1];
    }
    printf("\n%s",str1);
    return 0;
}
