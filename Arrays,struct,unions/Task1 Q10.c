//10. Program to create a binary search tree using arrays.

#include<stdio.h>

void checkr(int ele,int bst[],int r);

int main() {
    int bst[50],arr[10];
    int size,r=1;
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter array: \n");
    for(int i=0;i<50;i++)
    {    
        bst[i]=-1;
    }
    for(int i=0;i<size;i++)
    {    
        scanf("%d",&arr[i]);
    }
    printf("bst: ");
    for(int i=0;i<size;i++)
    {
        r=1;
        checkr(arr[i],bst,r);
    }
    for(int i=0;bst[i]!=arr[size-1];i++)
    printf("%d ",bst[i]);
    printf("%d ",arr[size-1]);
    return 0;
}

void checkr(int a,int bst[],int r)
{
    if(bst[r]!=-1)
    {
        if(bst[r]<a)
        {
            r=(r*2)+1;
            checkr(a,bst,r);
        }
        else
        {
            r=r*2;
            checkr(a,bst,r);
        }
    }
    else
    bst[r]=bst[r]+a+1;
}


