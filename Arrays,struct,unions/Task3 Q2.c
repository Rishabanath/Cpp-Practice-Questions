//2. Write a program to check whether the entered string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    printf("Enter string: ");
    gets(str);
    int flag=0;
    int size;
    size=(strlen(str));
    // printf("\n%d",size);

    for(int i=0;i<size/2;i++)
    {
        printf("%c %c\n",str[i],str[size-1-i]);
        if(str[i]!=str[size-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("not a palindrome");
    else
    printf("palindrome");
   
    return 0;
}
