//5. Add three values without using addition operator(+)

#include <stdio.h>

int sum(int num1,int num2)
{
    int carry;
    while(num2!=0)
    {
        carry=num1&num2;
        num1=num1^num2;
        num2=carry<<1;
    }
    return num1;
}

int main()
{
    int num1,num2,num3,res,carry;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    res=sum(num1,num2);
    res=sum(res,num3);
    printf("sum is: %d",res);
    
    return 0;
}