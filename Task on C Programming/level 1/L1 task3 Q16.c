//16.Write a program in C to print a sum of odd no between 0 to 10 using continue.


#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<=10;i++)
    {
        if((i%2)==0)
        {
            continue;
        }
        sum=sum+i;
    }
    printf("%d ",sum);

    return 0;
}