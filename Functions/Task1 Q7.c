//7. Write a C program to calculate power using recursion.

#include <stdio.h>

int power(int num1,int num2)
{
    if(num2>1)
    return (num1*power(num1,num2-1));
    else
    return(num1);
}

int main()  
{
    int num1,num2;
    printf("Enter number and its power: ");
    scanf("%d %d",&num1,&num2);
    printf("%d raised to the power of %d= %d",num1,num2,power(num1,num2));
    
    return 0;
} 
