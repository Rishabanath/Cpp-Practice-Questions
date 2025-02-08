//1. Program to sum of two numbers using pointers.

#include<stdio.h>

int main()
{
	// Write C code here
    int number1,number2,*num1,*num2,sum;
    num1=&number1;
    num2=&number2;
    printf("Enter 2 numbres: ");
    scanf("%d %d",num1,num2);
    sum=*num1+*num2;
    printf("sum+ %d",sum);

}