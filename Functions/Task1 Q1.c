// 1.Program to find the sum of n numbers using recursive call.


#include <stdio.h>
int sum(int[],int);
int main() {
    // Write C code here
    int n,res,num[10];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
    res=sum(num,n);
    printf(" sum= %d",res);
    return 0;
}

int sum(int num[],int n)
{
    if(n>1){
        // printf("\nnum,n= %d %d\n",num[n-1],n);
    return num[n-1]+sum(num,n-1);
    }
    else
    return num[0];
}