/*19.Write a program to print the following pattern

                         1

                         1 2

                         1  2   3

                         1  2   3  4

*/
#include<stdio.h>
int main()
{
    // int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)<=(2*i))
            printf("%d ",j+1);
        }
        // k=k+2;
        printf("\n");
    }
    
    return 0;
}