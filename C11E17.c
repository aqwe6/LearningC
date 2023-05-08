// Write a function that takes as a parameter an array A containing N rows and N columns.
// The function must return the pointer to a vector B of size N dynamically allocated, where each position of B is the sum of the numbers of that Matrix column.

#include<stdio.h>
#include<stdlib.h>

int V(int N,int A[N][N])
{
    int *p;
    p = (int *) malloc(N*sizeof(int));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            p[i] += A[j];
        }
    }
    return printf("%d\n",p);
}

int main()
{
    int l,X[l][l];
    scanf("%d",&l);
    V(l,X);

    system("Pause");
    return 0;
}
