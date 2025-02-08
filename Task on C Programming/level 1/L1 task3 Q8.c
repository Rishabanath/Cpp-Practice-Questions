//8.Write a C program to show the use of static variable.


#include<stdio.h>

int main()
{
    statFun();
    statFun();
    return 0;
}

void statFun()
{
    int a=10;
    static b=10;
    printf("\nValue of a= %d",a++);
    printf("\nValue of b= %d",b++);
}