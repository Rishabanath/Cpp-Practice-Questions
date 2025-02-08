//3. Find the Fibonacci Series up-to 'n' terms w/o using Arrays.

#include <stdio.h>

int main() {
    // Write C code here
    int i=0,a,n,b,c;
    printf("\nEnter n: ");
    scanf("%d",&n);
    a=0;
    b=1;
    
        if(i==0 ||n==0){
            printf("%d",a);
            i++;
        }
        if(i==1 ||n==1){
        printf("%d",b);
        i++;
        }
        if(n>1)
        for(int i=2;i<n;i++)
        
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d",c);
        }
        

    
    return 0;

}