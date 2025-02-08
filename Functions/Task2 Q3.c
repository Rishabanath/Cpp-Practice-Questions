//3. Program to print all uppercase alphabets from 'A' to 'Z' using recursion.

#include <stdio.h>

int prAtoZ()
{
    static int index=65;
    if(index<=90){
    printf("%c ",index++);
    prAtoZ();
    }
}
int main()
{
    prAtoZ();
    return 0;
}