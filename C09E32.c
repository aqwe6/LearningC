// Write a function that takes as a parameter a vector containing N integer values. This function must return, by reference, two values: the sum of the numbers even and odd.

#include<stdio.h>
#include<stdlib.h>

int k(int *X[5])
{
    int b = 0;
    int c = 0;
    for(int f=0 ; f < 5 ; f++)
    {
        if(*X[f]%2 == 0) b = b+*X[f];
        else c = c+*X[f];
    }
    return printf("%d\n%d\n",b,c);
}

int main()
{
    int A[5];
    for(int i = 0 ; i<5 ; i++) scanf("%d",&A[i]);
    k(&A);

    system("pause");
    return 0;
}
