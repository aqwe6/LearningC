// Make a program that reads a non-negative integer value N.
// If the value of N is invalid, the user must type another until it is valid (that is, positive).
//Then read a vector V containing N integer positions, where each value must be greater than or equal to 2. This vector must be allocated dynamically.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,*V;
    do
    {
        scanf("%d",&N);
    }while(N<1);
    for(int i=0; i<N;i++) scanf("%d",&V[i]);
    V = (int *) malloc(N*sizeof(int));

    system("Pause");
    return 0;
}
