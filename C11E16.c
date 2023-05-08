// Write a function that takes as a parameter an array A containing N rows and N columns, and a vector B of size N.
// The function must return the pointer to a dynamically allocated vector C of size N, where C is the product of matrix A by vector B.

#include<stdio.h>
#include<stdlib.h>

int V(int N,int A[N][N],int B[N])
{
    int *p;
    p = (int *) malloc(N*sizeof(int));
    for(int i=0;i<N;i++)
    {
        p[i] = (int *) malloc((i+1)*sizeof(int));
        for(int j=0;j<N;j++)
        {
            p[i] = A[i][j] * B[i];
        }
    }
    return printf("%d\n",p);
}

int main()
{
    int l,X[l][l],Y[l];
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            X[i][j] == i+j;
        }
    }
    for(int i=0;i<l;i++) Y[i] = i;
    V(l,X,Y);

    system("Pause");
    return 0;
}
