//4. Count the total number of words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int size;
    size=(strlen(str));
    int count = 0;
    for(int i=0;i<size;i++)
    {
        // printf("\ncount: %d",count);
        // printf("\ni nd i+1: %c %c",str[i],str[i+1]);
        if(str[i]==' '&& isalpha(str[i+1]))
        count++;
    }
    printf("Numbers of words in string is: %d",++count);
    
    return 0;
}
