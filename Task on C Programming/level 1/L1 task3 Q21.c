/*21.Write a program to print the following pattern

                        $

                  $          $

             $         $         $

         $       $         $         $
		 */
#include<stdio.h>
int main()
{
    int k=0,c=4;
    printf("pattern:\n");
    for(int i=0;i<4;i++)
    {
        for(int f=0;f<c;f++)
            {
                printf(" ");
            }
        for(int j=0;j<4;j++)
        {
            if((i+j)<=k)
            {
                printf(" $ ");
                c--;
            }
        }
        k=k+2;
        printf("\n");
    }
    
    return 0;
}