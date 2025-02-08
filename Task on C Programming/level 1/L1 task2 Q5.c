//5.Program to find the output of the following expression: x + x^3/3! + x^5/5! +…….+ x^n/n!


#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    float res=0.0,fact=1.0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter x: ");
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
        if((i%2)!=0)
        {
            fact=1;
            for(int j=1;j<=i;j++)
            fact*=j;
            //printf("\nfact: %d\n",fact);
            res=res+(pow(x,i)/fact);
            //printf("Res: %d",res);
        }
    }
    printf("Result: %f",res);
    return 0;
}
