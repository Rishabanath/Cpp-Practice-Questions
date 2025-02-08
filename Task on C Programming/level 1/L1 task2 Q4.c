/*4.Program to check the two given numbers are same or equal without using any comparison operator.

*/
#include <stdio.h>

int main()
{
    int num1,num2,diff;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    diff=num1^num2;
    if(diff)
    printf("not equal");
    else
    printf("equal");
    return 0;
}