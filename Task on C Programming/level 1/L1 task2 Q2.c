/*2.Program to clear the specified bit of a number.
*/

#include<stdio.h>
int main() {
    // Write C code here
    int number,pos,res;
    printf("\nEnter number: ");
    scanf("%d",&number);
    printf("Enter position: ");
    scanf("%d",&pos);
    number = number & ~(1 << pos);
    printf("Number :%d",number);
    
    
    return 0;

}