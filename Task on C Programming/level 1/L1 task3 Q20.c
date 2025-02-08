/*20.Write a program to print the following pattern

                         1

                         2  3

                         4  5   6

                         7  8   9  10
						 */
#include<stdio.h>
int main()
{
    int c=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)<=(2*i))
            {
                printf("%d ",c);
                c++;
            }
        }
        // k=k+2;
        printf("\n");
    }
    
    return 0;
}