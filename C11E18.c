// Write a function that takes as a parameter two matrices, A and B, and their Sizes.
// The function must return the pointer to an array C, where C is the product of the multiplication of matrix A by matrix B.
// If multiplication of the matrices is not possible, return a null pointer.

#include<stdio.h>
#include<stdlib.h>

int V(int N,int A[N][N],int B[N][N])
{
    int *p;
    p = (int *) malloc(N*sizeof(int));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            p[i] = A[i][j]*B[i][j];
        }
    }
    return printf("%d\n",p);
}

int main()
{
    int l,X[l][l],Y[l][l];
    scanf("%d",&l);
    V(l,X,Y);

    system("Pause");
    return 0;
}
