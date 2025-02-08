//2. C program to count 1s in a number (get input from user)..

#include <stdio.h>

int main()
{
    int num,count=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num>=1)
    {
        if((num%10)==1)
        count++;
        num=num/10;
        // printf("\nct: %d\n",i++);
        
    }
    printf("number of 1s : %d",count);
    return 0;
}