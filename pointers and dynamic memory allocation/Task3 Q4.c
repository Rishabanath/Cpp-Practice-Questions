//4. C program to input and print array elements using pointers.

#include<stdio.h>

int main()
{
    // Write C code here
    int array[10],*ptr,size;
    ptr=array;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    printf("\nEnter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=array;
    printf("\nArray elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",*ptr);
        ptr++;
    }
    
    return 0;
}
