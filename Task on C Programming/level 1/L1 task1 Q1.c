//1. Find the nth bit of a given number.

#include <stdio.h>
// #include <conio.h>

int main() {
    // clrscr();
    // Write C code here
    int number,pos,res;
    printf("\nEnter number: ");
    scanf("%d",&number);
    printf("Enter position: ");
    scanf("%d",&pos);
    res=(number>>pos)&1;
    printf("The bit in postion %d is %d",pos,res);
    

    return 0;
}