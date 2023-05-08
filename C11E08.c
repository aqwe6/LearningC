// Write a function that takes a positive integer value N per parameter and returns the pointer to a dynamically allocated vector of size N.
// If N is negative or equal to zero, a null pointer should be returned.

#include<stdio.h>
#include<stdlib.h>

int X(int N)
{
    int *p;
    for(int i=0;i<N;i++) p[i] = i;
    p = (int *) malloc(N*sizeof(int));
    if(N<1) *p = NULL;
    return printf("%d\n",*p);
}

int main()
{
    int l;
    scanf("%d",&l);
    X(l);

    system("Pause");
    return 0;
}
