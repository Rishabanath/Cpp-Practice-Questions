//9. C program to declare, initialize the data and display any union datatype.

#include <stdio.h>

union sample {
    char a;
    int b;
    double c;
};

int main()
{
    union sample samp; 
    samp.a = 'r';
    samp.b = 22;
    samp.c = 45.78;
    printf("\nValue of :\na:%c\nb:%d\nc:%f", samp.a, samp.b, samp.c);
    printf("\nSize of union: %d",sizeof(samp));
    return 0;
}
