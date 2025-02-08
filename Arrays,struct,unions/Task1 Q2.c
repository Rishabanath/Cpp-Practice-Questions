// 2. Create a Sparse matrix and find out the locations where 1's are there.

#include <stdio.h>

int main() {
    // Write C code here
    int i,j;
    int arr[3][3]={{0,1,0},{0,1,1},{1,0,0}};
    printf("'1' is present in: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            printf("(%d,%d) ",i,j);
        }
    }

    return 0;
}
