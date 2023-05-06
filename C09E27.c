// Create a function that receives an A matrix containing 10 rows and 10 columns, and Return the sum of its elements.

#include<stdio.h>
#include<stdlib.h>

void k(int X[10][10])
{
    int b=0;
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++) b = b + X[i][j];
    }
    printf("%d\n",b);
}

int main()
{
    int A[10][10];
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++) scanf("%d",&A[i][j]);
    }

    k(A);

    system("pause");
    return 0;
}
