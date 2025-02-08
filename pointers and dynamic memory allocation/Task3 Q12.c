//12. Write a program in C to use a pointer to the union data type.

#include <stdio.h>

union number
{
    int a,b;
};
    
int main()
{
    

    union number n; 
    union number *ptr = &n;
    ptr->a = 20;
    printf("a = %d\n", ptr->a);
    ptr->b = 30;
    printf("b = %d\n", ptr->b);

    return 0;
}
