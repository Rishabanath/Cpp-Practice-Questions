//3. Access two dimensional arrays using pointers in C.

#include<stdio.h>

int main()
{
	// Write C code here
    int array[10][10];
    int i,j,size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            scanf("%d",(*(array+i)+j));
        }
    }
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            printf("%d ",*(*(array+i)+j));
        }
        printf("\n");
    }

}