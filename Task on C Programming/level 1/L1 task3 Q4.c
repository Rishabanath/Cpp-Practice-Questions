//4.Write a program by using Bitwise operators (left and right shift).

#include<stdio.h>

int main()
{  int num;
   printf("enter number: ");
   scanf("%d",&num);
   printf("\nLeft shift by 1(<<1): %d",num<<1 );
   printf("\nRight shift by 1(>>1): %d",num>>1 );
  
   return 0;
}