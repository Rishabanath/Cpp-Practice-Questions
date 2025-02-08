//11.Program to check a person is eligible to donate blood using nested if.


#include<stdio.h>

int main()
{
    // haemo,wt,age,last dont
    int age,wt,haemo;
    char ldon;
    printf("\nEnter age: ");
    scanf("%d",&age);
    printf("\nEnter weight: ");
    scanf("%d",&wt);
    printf("\nEnter haemoglobin level: ");
    scanf("%d",&haemo);
    // fflush(stdin);
    printf("\nDid you donate in the last 3 months:(y/n) ");
    // fflush(stdin)
    getchar();
    scanf("%c",&ldon);
    
    // getchar();
    //printf("\nvals %d %d %d",age,wt,haemo);
    //printf("\nvals %d %d %d %c",age,wt,haemo,ldon);
    if((age>=18) && (age<65))
    {
        // printf("\n1");
        if(wt>60)
        {
            // printf("\n2 ");
            if(haemo>12.5)
            {
                // printf("\n3 ");
                if(ldon=='n')
                {
                    printf("\nEligible");
                }
                else
                printf("\nNot eligible");
            }
            else
            printf("\nNot eligible");
        }
        else
        printf("\nNot eligible");
    }
    else
    printf("\nNot eligible");
    
    return 0;
}