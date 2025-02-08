//3.Add two complex numbers using structure and functions to read, add and write the data.

#include <stdio.h>
typedef struct complex {
    int real;
    int imag;
}complex;

complex add(complex n1, complex n2);
complex read();
void write(complex res);

int main() {
    complex n, n2, result;
    
    n=read();
    n2=read();
    write(add(n,n2));

    return 0;
}

complex read()
{
    complex n1;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &n1.real, &n1.imag);
    return(n1);
}

complex add(complex n1, complex n2) {
    complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return (result);
}

void write(complex result)
{
    printf("Addition of both Complex number is: %d+%di",result.real,result.imag);
}