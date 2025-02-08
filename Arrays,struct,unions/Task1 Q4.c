// 4. Write a program to illustrate packing in structure with an example.

#include <stdio.h>
struct sample1//size is taken: char 1byte, char 1byte, int 4byte and 1block memory=4byte. therefore 2blocks memory is taken with 2bytes wastage
{ 
    char ch1;    
    int num1;
    char ch2;
};
struct __attribute__((__packed__)) sample2//no wastage of memory
{
    char ch1;
    int num1;
    char ch2;
};

int main() {
    // Write C code here
    struct sample1 samp1;
    struct sample2 samp2;
    printf("\nSize os sample1 : %d", sizeof(samp1));//with padding or without packing
    printf("\nSize os sample2 : %d", sizeof(samp2));//without padding or with packing

    return 0;
}
