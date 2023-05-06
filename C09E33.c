// Create a function that takes a vector of size N and sorts its values.

#include<stdio.h>
#include<stdlib.h>

int k(int X[5])
{
    int b = 0;
    int c = 0;
    for(int f=0 ; f < 5 ; f++)
    {
        for(int j = 0 ; j < f ; j++)
        {
            if(X[f] < X[j])
            {
                b = X[f];
                X[f] = X[j];
                X[j] = b;
            }
            b = 0;
        }
    }
    for(int i = 0 ; i < 5 ; i++) printf("%d\n",X[i]);
}

int main()
{
    int A[5];
    for(int i = 0 ; i<5 ; i++) scanf("%d",&A[i]);
    k(A);


    system("pause");
    return 0;
}
