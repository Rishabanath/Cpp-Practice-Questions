//10.Largest among three numbers using nested if statement


#include<stdio.h>

int main()
{
    int num1,num2,num3,result=0;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Enter num3: ");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        result=num1;
        else
        result=num3;
    }
    else
    {
        if(num2>num3)
        result=num2;
        else
        result=num3;
    }
    printf("largest number is :%d",result);
 
    return 0;
}