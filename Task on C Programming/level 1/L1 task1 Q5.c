//5. Find the maximum of 'n' numbers.

#include <stdio.h>

int main() {
    // Write C code here
    int n,a[10],min;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    scanf("%d",&a[0]);
    min=a[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        min=(min<a[i])?min:a[i];
    }
    printf("Least number is: %d",min);
    
    
    
    return 0;

}