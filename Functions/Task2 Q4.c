//4.Reverse a numbers using a recursion

#include <stdio.h>

void rev(int num)
{
    static int num1=0;
    if(num>=1)
    {
        num1=(num1*10)+(num%10);
        num=num/10;
        rev(num);
    }
    else
    printf("reverse is: %d",num1);
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    rev(num);
    
    return 0;
}