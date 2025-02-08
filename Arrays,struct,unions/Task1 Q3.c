// 3. Write a program to illustrate padding in structure with an example.

#include <stdio.h>
struct sample1//size is taken: char 1byte, char 1byte, int 4byte and 1block memory=4byte. therefore 2block memory is taken with 2bytes wastage
{ 
    int num1;
    char ch1;
    char ch2;
};
struct sample2//size is taken: char 1byte, int 4byte, char 1byte and 1block memory=4byte. therefore 3block memory is taken woth 6bytes wastage
{//done to reduce CPU cycles
    char ch1;
    int num1;
    char ch2;
};

int main() {
    // Write C code here
    struct sample1 samp1;
    struct sample2 samp2;
    printf("\nSize os sample1 : %d", sizeof(samp1));//without padding
    printf("\nSize os sample2 : %d", sizeof(samp2));//with padding

    return 0;
}
