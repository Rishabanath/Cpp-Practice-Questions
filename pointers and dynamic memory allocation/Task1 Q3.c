//3. Manipulate an array using pointers, where find out count of the prime numbers and its position stored in that array.

#include<stdio.h>

int prime(int *numb)
{
    int i,flag=0;
    int num=*numb;
    printf("\nnumber is: %d",num);
    if (num==0||num==1)
    flag=0;
    else{
    for (i=2;i<=num/2;++i) 
    {
        if (num%i==0) 
        {
        flag=1;
        break;
        }
    }}
    if (flag==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a[10],size,count=0;
    int *p = a;    
    printf("Enter size:");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
    {
        scanf("%d", p);
        p++;
    }
    p = &a;
    for (int i=0;i<size;i++)
    {
        if(prime(p)==1)
        {
            printf("\nposition= %d",i);
            count++;
        }
        p++;
    }
    printf("\nNumber of primes: %d",count);
    return 0;
}
  