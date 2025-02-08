//5. To search an element in array using function pointers.

#include<stdio.h>

int main()
{
    // Write C code here
    int array[10],*ptr,size,element,flag;
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
    printf("\nEnter element to be searched :\n");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(*ptr==element)
        {
            printf("element found");
            flag=1;
            break;
        }
        ptr++;
    }
    if(flag!=1)
    printf("element not found");
    
    return 0;
}
