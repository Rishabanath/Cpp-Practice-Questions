//5.Write a program for increment (pre and post) and decrement (pre and post) operators.


#include<stdio.h>

int main()
{  int num,k;
   k=num=6;
   printf("\npre increment(++6): %d",++num );
   num=k;
   printf("\npost increment(6++): %d",num++ );
   printf("\nafter executing statement: %d",num-- );
   num=k;
   printf("\npre decrement(--6): %d",--num );
   num=k;
   printf("\npost decrement(6--): %d",num-- );
   printf("\nafter executing statement: %d",num );
  
   return 0;
}