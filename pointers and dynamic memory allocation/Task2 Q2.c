//2. C program to search element in array using pointers.

#include<stdio.h>
#include<string.h>

int main()
{
	// Write C code here
    char string[20],*str,element;
    int i,flag=0;
    printf("\nEnter string: ");
    gets(string);
    printf("\nEnter element to be searched: ");
    scanf("%c",&element);
    str=string;
    while(*str!='\0')
    {
        if (*str==element)
        {
            flag=1;
            break;
        }
        str++;
    }
    if(flag==1)
        printf("\nElement is present");
    else
        printf("\nNot Present");

}