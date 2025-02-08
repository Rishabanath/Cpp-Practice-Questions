//6.Write a program to convert decimal to binary.


#include<stdio.h>

int main()
{  int num,k,i=1,res=0;
   printf("Enter number: ");
   scanf("%d",&num);
   while(num>1)
   {
       if(num%2)
       k=1;
       else
       k=0;
       res=((res)+(k*i));
       i=i*10;
       num=num/2;
       printf("\nnumber: %d\n",res);
   }
   if(num==1)
   res=res+(1*i);
   else
   res=res*10;
   printf("binary equivalent= %d",res);
  
   return 0;
}