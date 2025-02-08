//7.Write a program to differentiate local and global variables.


#include<stdio.h>
int a=10;
int main()
{  
    int b=8;
    {
    int c=7;
    printf("\na is global\n a is assigned 10\n\nb is local\n b is assigned 8, \nc is assigned inside {}\n c is assigned 7\n");
    printf("\ninside { }:\nvalue of a= %d, value of b= %d, value of c= %d",a,b,c);
    }
    //printf("\noutside { }:\nvalue of a= %d, value of b= %d, value of c= %d",a,b,c);
    printf("\noutside { }:\nvalue of a= %d, value of b= %d, value of c= unable to print",a,b);
   return 0;
}