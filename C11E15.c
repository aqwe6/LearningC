// Write a function that takes as a parameter two vectors, A and B, of size N each.
// The function must return the pointer to a dynamically allocated vector C of size N, where C[i] = A[i] * B

#include<stdio.h>
#include<stdlib.h>

int V(int N,int A[N],int B[N])
{
    int *p;
    p = (int *) malloc(N*sizeof(int));
    for(int i=0;i<N;i++) p[i] = A[i] * B[i];
    return printf("%d\n",p);
}

int main()
{
    int l,X[l],Y[l];
    scanf("%d",&l);
    for(int i=0;i<l;i++) scanf("%d",&X[i]);
    for(int i=0;i<l;i++) scanf("%d",&Y[i]);
    V(l,X,Y);

    system("Pause");
    return 0;
}
