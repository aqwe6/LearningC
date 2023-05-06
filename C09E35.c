// Elaborate a function that takes a vector containing N values and returns by reference the largest and smallest element of that vector.

#include<stdio.h>
#include<stdlib.h>

void k(int X[5])
{
    int b = 0;
    int c = X[0];
    for(int f=0 ; f < 5 ; f++)
    {
        if(X[f] > b) b = X[f];
        if(X[f] < c) c = X[f];
    }
    printf("%d\n%d\n",b,c);
}

int main(void)
{
    int A[5];
    for(int i = 0 ; i<5 ; i++) scanf("%d",&A[i]);
    k(A);


    system("pause");
    return 0;
}
