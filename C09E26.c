// Create a function that receives an A matrix containing five rows and five columns.
//Calculate in the matrix A itself its transpose (if B is the transposed matrix of A, then A[i][j] = B[j][i]).

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void k(int X[5][5])
{
    int B[5][5];
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++) B[j][i] = X[i][j];
    }
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++) printf("%d ",B[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[5][5];
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++) scanf("%d",&A[i][j]);
    }

    k(A);

    system("pause");
    return 0;
}
