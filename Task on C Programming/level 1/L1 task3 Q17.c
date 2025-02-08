//17.Write a program in C to illustrate how to use goto statement.


#include<stdio.h>
int main()
{
    int a=10;
    here:
    if(a>4)
    {
        printf("%d ",a);
        a=a-1;
        goto here;
    }
    
    return 0;
}