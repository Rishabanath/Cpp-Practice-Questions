/*9. Write a C program that uses a menu showing all the operations done using macros where the operations are

a. Find the maximum of two numbers using ternary operator.

b. Find the Cube of a numbers where use Square of a number also. Ex: Square(x) * x;

c. Find the Power of a number X^n.

d. Find Product of two numbers without using * operator.*/

#include <stdio.h>
#include<math.h>
#define max(num1,num2) ((num1>num2)?num1:num2)
#define square(num) (num*num)
#define qube(num) (square(num)*num)
#define mul(x,n) pow(x,n)
#define sum(res,num1) (res+=num1)

int main()
{
    int choice,num1,num2;
    printf("Enter choice:\n1.max of 2 numbers\n2.qube of a number\n3.power x,n\n4.product of 2numbers:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter 2 numbers: ");
        scanf("%d %d",&num1,&num2);
        printf("max number is: %d",max(num1,num2));
    }
    if(choice==2)
    {
        printf("Enter a number: ");
        scanf("%d",&num1);
        printf("qube of %d is: %d",num1,qube(num1));
    }
    if(choice==3)
    {
        int res=1;
        printf("Enter x,n: ");
        scanf("%d %d",&num1,&num2);
        res*=mul(num1,num2);
        printf("%d raised to the power %d is: %d",num1,num2,res);
    }
    if(choice==4)
    {
        int res=0;
        printf("Enter 2 numbers: ");
        scanf("%d %d",&num1,&num2);
        for(int i=0;i<num2;i++)
        res=sum(res,num1);
        printf("%d * %d is: %d",num1,num2,res);
    }
    return 0;
}