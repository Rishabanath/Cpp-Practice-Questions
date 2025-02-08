/*2.(L2)- You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

 

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Example

Input: mat = [[1,2],[3,4]], r = 1, c = 4

Output: [[1,2,3,4]]
*/

#include <stdio.h>

void printMat(int row,int col, int arr[])
{
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[count]);
            count++;
        }
        printf("\n");
    }
}

int main()
{
    int mat[5][5],m,n,r,c,arr[20],count=0;
    printf("Enter size m,n: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            arr[count]=mat[i][j];
            count++;
        }
    }
    printf("Given matrix:\n");
    printMat(m,n,arr);
    printf("Enter required matrix size r,c: ");
    scanf("%d %d",&r,&c);
    printf("Required matrix :\n");
    count=0;
    if((r*c)==(m*n))
    {
        printMat(r,c,arr);
    }
    else
    {
        printMat(m,n,arr);
    }
    

    return 0;
}
