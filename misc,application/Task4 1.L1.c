#include <stdio.h>

int main()
{
    int array[10],size,count=0;
    printf("Enter size: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(array[i]==0)
        {
            for(int j=i;j<size-count-1;j++)
            {
                array[j]=array[j+1];
            }
            
            count++;
        }
    }
    for(int j=1;j<=count;j++)
        {
            array[size-j]=0;
        }
    printf("\n");
    for(int k=0;k<size;k++)
    {
        printf("%d ",array[k]);
    }
    

    return 0;
}
