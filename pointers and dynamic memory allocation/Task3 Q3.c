//3. Swap two numbers using function pointers.

#include<stdio.h>

void Swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nNumber1: %d",num1);
    printf("\nNumber2: %d",num2);
}

int main()
{
	// Write C code here
    int number1,number2;
    void (*swap)(int,int)=Swap;
    printf("\nEnter number1: ");
    scanf("%d",&number1);
    printf("\nEnter number2: ");
    scanf("%d",&number2);
    printf("\nAfter swap:\n");
    swap(number1,number2);
    
    return 0;
}
