//2. Check whether x=10 and y=?(user input) are same w/o using comparison operator.

#include <stdio.h>

int main() {
    // Write C code here
    int diff,y,x=10;
    printf("\nEnter number: ");
    scanf("%d",&y);
    diff=x-y;
    if(diff)
    printf("not same");
    else
    printf("same");
    return 0;

}