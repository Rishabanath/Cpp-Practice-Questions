//1.Recursion to print Fibonacci series up to 20.

#include <stdio.h>

int fib()
{
    static int count=0,a,b=1;
    int c;
    if(count==0)
    {
        printf("0 ");
        count++;
    }
    if(count==1)
    {
        printf("1 ");
        count++;
    }
    if(count<20)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        count++;
        fib();
    }
}
int main()
{
    int num;
    fib();
   
    return 0;
}