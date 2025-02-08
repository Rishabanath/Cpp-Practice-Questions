//6. Write a program to find factorial of a number using recursion.

#include <stdio.h>

int fact(int num)
{
    if(num>1)
    return (num*fact(num-1));
    else
    return(num);
}

int main()  
{
    int num;
    printf("Enter number to find factorial: ");
    scanf("%d",&num);
    printf("factorial of %d= %d",num,fact(num));
    
    return 0;
} 
