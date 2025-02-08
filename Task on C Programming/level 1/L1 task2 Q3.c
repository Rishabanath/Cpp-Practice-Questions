/*3.Write a C program which reads an integer n and prints a twin prime which has the maximum size among twin primes less than or equals to n.
According to wikipedia "A twin prime is a prime number that is either 2 less or 2
more than another prime number" for example, either member of the twin prime
pair (41, 43). In other words, a twin prime is a prime that has a prime gap of two".
*/
#include <stdio.h>

int checkprime(int num)
{
    int flag=0;
    for(int j=2;j<num;j++)
    {
            if((num%j)==0)
            flag=1;
    }
    return flag;
}

int main()
{
    int a,flag1,flag2;
    printf("Enter number: ");
    scanf("%d",&a);
    // lt[0]=lt[1]=0;
    // lt[2]=1;
    for(int i=a;i>=3;i--)
    {
        flag1=flag2=0;
        flag1=checkprime(i);
        if(flag1==0)
        {
            flag2=checkprime(i-2);
            if(flag2==0)
            {
                printf("%d %d",i,i-2);
                break;
            }
        }
        
    }

    return 0;
}