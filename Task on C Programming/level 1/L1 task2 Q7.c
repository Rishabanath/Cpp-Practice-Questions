/*7.Print a checkerboard (8-by-8 grid). Each square should be 5-by-3 characters wide. A 2-by-2 example follows:

+-----+-----+

|        |      |

|        |      |

|        |      |

+-----+-----+

|       |       |

|       |       |

|       |       |

+-----+-----+*/


#include <stdio.h>

int main()
{
    int a,b,l,count=0;;
    for(int i=0;i<9;i++)
    {
        printf("+");
        for(int h=0;h<8;h++)
        {
            for(int j=0;j<5;j++)
            {
                printf("-");
            }
            printf("+");
        }
        printf("\n");
        count++;
        if(count<9){
        for(int p=0;p<3;p++)
        {printf("|");
        for(int h=0;h<8;h++)
        {
            for(int j=0;j<5;j++)
            {
                printf(" ");
            }
            printf("|");
        }
        printf("\n");
        }}
    }



	return 0;
}
