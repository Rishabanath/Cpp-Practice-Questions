//2.Write a program in which to declare all data types like integer, double, float, long integer and print value in specified format.


#include<stdio.h>

int main()
{  int i;
   double d;
   float f;
   long int l;
   printf("enter integer value: ");
   scanf("%d",&i);
   d=(double)i;
   f=(float)i;
   l=(long int)i;
   printf("value of: \nint=%d \ndouble=%d \nfloat=%f \nlong int=%lf",i,d,f,l);
   
   return 0;
}