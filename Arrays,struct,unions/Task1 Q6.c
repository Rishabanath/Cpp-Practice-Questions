/* 6.Create an adjacency matrix, where '1' represents the edges of a graph from i -> j, also use i != j  as a constraint and find the 
number of incoming and out going edges of each vertex.*/


#include <stdio.h>

int main() {
    // Write C code here
    int arr[4][4]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};
    for(int i=0;i<4;i++)
    {
        printf("\nincoming and outgoing edges of vertex from '%c':  ",i+97);
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1)
            {
                printf("\n\t'%c'->'%c'",i+97,j+97);
            }
        }
    }
    return 0;
}
