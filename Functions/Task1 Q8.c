//8. Write a program that uses macros to find the maximum and minimum of three numbers.

#include <stdio.h>
#define max(a,b,c) (((a)<(b)?((b<c)?c:b):((a<c)?c:a)))
#define min(a,b,c) (((a)>(b)?((b<c)?b:c):((a<c)?a:c)))

int main()  
{
    int num1,num2,num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The largst of the three numbers is: %d",max(num1,num2,num3)); 
    printf("\nThe least of the three numbers is: %d",min(num1,num2,num3));
    
    return 0;
} 
