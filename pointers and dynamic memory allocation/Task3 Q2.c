//2. Program to find the maximum of two numbers using function pointers.

#include<stdio.h>

int Maximum(int num1,int num2)
{
    return (num1>num2?num1:num2);
}

int main()
{
	// Write C code here
    int number1,number2;
    int (*fptr)(int,int)=Maximum;
    printf("Enter 2 numbres: ");
    scanf("%d %d",&number1,&number2);
    printf("\nMaximum number is: %d",fptr(number1,number2));
    return 0;
}
