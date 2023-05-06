// Elaborate a function that takes a vector containing N values and returns by reference the largest element of the vector and the number of times that element has occurred in the vector.

#include<stdio.h>
#include<stdlib.h>

void k(int X[5])
{
    int b = 0;
    int c = 1;
    for(int f=0 ; f < 5 ; f++)
    {
        if(X[f] > b)
        {
            b = X[f];
            c = 1;
        }
        else if(X[f] == b) c++;
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
