//3.Compare two numbers by using ternary operator.


#include<stdio.h>

int main()
{  int num1,num2,res,res2;
   printf("enter num1: ");
   scanf("%d",&num1);
   printf("enter num2: ");
   scanf("%d",&num2);
   res=(num1>num2)?num1:num2;
   res2=(num1<num2)?num1:num2;
   printf("%d is greater than %d",res,res2);
  
   return 0;
}