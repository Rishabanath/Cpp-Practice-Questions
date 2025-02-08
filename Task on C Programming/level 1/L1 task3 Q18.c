/*18.Write a C program to print the following pattern:

                          *

                          * *

                          * * *

                          * * * *
*/
#include<stdio.h>
int main()
{
    int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)<=(2*i))
            printf("* ");
        }
        // k=k+2;
        printf("\n");
    }
    
    return 0;
}