//3.Program to swap two numbers using pass by address and pass by value.

#include <stdio.h>
void swap2(int *x,int *n);
void swap1(int x,int n);

void swap1(int num1,int num2)
{
    int temp;
    temp=num2;
    num2=num1;
    num1=temp;
    printf("\nvalue of a =%d\nvalue of b =%d",num1,num2);
}

void swap2(int *num1,int *num2)
{
    int temp;
    temp=*num2;
    *num2=*num1;
    *num1=temp;
    printf("\nvalue of a =%d\nvalue of b =%d",*num1,*num2);
}

int main()  
{
    int a,b;
    printf("Enter numbers a & b: ");
    scanf("%d %d",&a,&b);
    swap1(a,b);
    printf("\nvalue of a =%d\nvalue of b =%d",a,b);
    swap2(&a,&b);
    printf("\nvalue of a =%d\nvalue of b =%d",a,b);
    
    return 0;
} 
