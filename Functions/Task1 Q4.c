//4.Write a program to find the power of a number X^n using call by address and call by value.

#include <stdio.h>
int power1(int num1,int num2);
int power2(int *num1,int *num2);

int power1(int num1,int num2)
{
    int res=1;
    for(int i=0;i<num2;i++)
    res*=num1;
    return res;
}

void power2(int *x,int *n)
{
    int res=1;
    while(*n>0){
    res*=*x;
    *n=*n-1;
    }
    *x=res;
}

int main()  
{
    int x,n,res;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    res=power1(x,n);
    printf("Value is: %d",res);
    power2(&x,&n);
    printf("\nValue is: %d",x);
    
    return 0;
} 
